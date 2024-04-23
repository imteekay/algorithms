/**
Question List

You're given a CSS file for the FrontendExpert question list, and you need to implement the component using React.

When the component initially mounts, it should make two API requests:

https://api.frontendexpert.io/api/fe/questions returns a list of all of the questions as JSON in this format:
[
  {
    "category": "HTML",
    "id": "sign-up-form",
    "name": "Sign-Up Form"
  },
  ...
]
https://api.frontendexpert.io/api/fe/submissions returns a list of the user's most recent submissions as JSON in this format:
[
  {
    "questionId": "blog-post",​​
    "status": "CORRECT"
  },
  ...
]
The component should render a fragment containing all of the categories. Each category is a div with a heading and one or more question divs. Each category div should have a category CSS class, and each question should have a question CSS class.

The category heading is an h2 with the text of the name of the category and how many correct submissions there are for questions in that category (correct questions have the "CORRECT" status). For example, if 1 out of 5 CSS questions have a "CORRECT" status, the category heading would read CSS 1 / 5.

The question divs should first contain another div for the status. This status div should have the CSS class of status and a CSS class based on the current status. If the question exists in the submissions API output, that status should be converted to lowercase, any _'s should be replaced with a -, and the resulting string should be used as a CSS class. For example, if a submission status is PARTIALLY_CORRECT, the complete CSS class of the status div would be status partially-correct. If there is no status in the submissions response, the status class should be status unattempted.

After the status div, each question should also contain an h3 with the title of the question.

The complete output of a category might look something like this:

<div class="category">
  <h2>CSS 1 / 5</h2>
  <div class="question">
    <div class="status incorrect"></div>
    <h3>Rainbow Circles</h3>
  </div>
  <div class="question">
    <div class="status partially-correct"></div>
    <h3>Navbar</h3>
  </div>
</div>

Your component has already been rendered to the DOM inside of a #root div directly in the body with the CSS imported.
*/

import React, { useState, useEffect } from 'react';

const QUESTIONS_API_BASE_URL = 'https://api.frontendexpert.io/api/fe/questions';
const SUBMISSIONS_API_BASE_URL =
  'https://api.frontendexpert.io/api/fe/submissions';

const getStatusCSSClass = (status) => {
  switch (status) {
    case 'CORRECT':
      return 'correct';
    case 'PARTIALLY_CORRECT':
      return 'partially-correct';
    case 'INCORRECT':
      return 'incorrect';
    default:
      return 'unattempted';
  }
};

const buildPosts = (questions, submissions) => {
  const posts = {};
  const submissionsStatus = {};

  for (const submission of submissions) {
    submissionsStatus[submission['questionId']] = submission['status'];
  }

  for (const question of questions) {
    if (posts[question['category']]) {
      posts[question['category']].list.push({
        id: question['id'],
        label: question['name'],
        status: getStatusCSSClass(submissionsStatus[question['id']]),
      });
    } else {
      posts[question['category']] = {
        list: [
          {
            id: question['id'],
            label: question['name'],
            status: getStatusCSSClass(submissionsStatus[question['id']]),
          },
        ],
      };
    }
  }

  for (const [categoryName, category] of Object.entries(posts)) {
    const total = category.list.length;
    const correct = category.list.filter(
      (post) => post.status === 'correct'
    ).length;
    posts[categoryName].progress = `${correct} / ${total}`;
  }

  return posts;
};

export default function QuestionList() {
  const [posts, setPosts] = useState({});
  const [isLoading, setIsLoading] = useState(false);

  useEffect(() => {
    const requestQuestions = async () => {
      const response = await fetch(QUESTIONS_API_BASE_URL);
      return await response.json();
    };

    const requestSubmissions = async () => {
      const response = await fetch(SUBMISSIONS_API_BASE_URL);
      return await response.json();
    };

    const request = async () => {
      setIsLoading(true);

      try {
        const [questionsPromise, submissionsPromise] = await Promise.all([
          requestQuestions,
          requestSubmissions,
        ]);
        const posts = buildPosts(
          await questionsPromise(),
          await submissionsPromise()
        );
        setPosts(posts);
      } catch (error) {
        console.error(error);
      } finally {
        setIsLoading(false);
      }
    };

    request();
  }, []);

  if (isLoading) return null;

  return (
    <>
      {Object.entries(posts).map(([category, categoryList]) => (
        <div class="category">
          <h2>
            {category} - {categoryList.progress}
          </h2>
          {categoryList.list.map((post) => (
            <div class="question">
              <div class={`status ${post.status}`}></div>
              <h3>{post.label}</h3>
            </div>
          ))}
        </div>
      ))}
    </>
  );
}
