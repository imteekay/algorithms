# Problem

This is going to be a data structure problem, the kind of problem we often encounter with the data we have: namely, that the data structure is not in the format that we want! 😡 So, what to do?

Given the following data:

```js
data = {
  something: { title: 'something', copy: 'something', link: 'something' },
  another: { title: 'another', copy: 'another', link: 'another' },
};
```

Create a **function** that will allow you to efficiently convert your data into the following format:

```js
output = [
  {
    id: 'something',
    title: 'something',
    copy: 'something',
    link: 'something',
  },
  {
    id: 'another',
    title: 'another',
    copy: 'another',
    link: 'another',
  },
];
```

As you can see, the goal of this exercise is to convert your data into an array of objects where the `id` for each object in the new array maps to the keys of the original object.

## Notes

- As the original data is an object, all keys will be unique, so you don't have to worry about duplicate entries.
- The data could be incredibly long or short so, as always, be mindful of time complexity.

## Tips

- There are various ways to solve this problem, and it is useful to explore each.
- Try to think of a multitude of solutions, get each working -- and then consider the strengths and weaknesses of each.
- After you have your final answer, think about how you can clean it up. That is, how can you make the code more readable while also being concise?
