const posts = [
  {
    id: 5,
    authorId: 1,
    content: 'Post 5',
  },
  {
    id: 6,
    content: 'Post 6',
    authorId: 12,
  },
];

const likes = [
  { id: 1, postId: 5 },
  { id: 2, postId: 10 },
  { id: 3, postId: 124 },
];

const postToLikeMapper = likes.reduce(
  (mapper, { id, postId }) => ({ ...mapper, [postId]: id }),
  {}
);

posts.filter(({ id }) => postToLikeMapper[id]);
