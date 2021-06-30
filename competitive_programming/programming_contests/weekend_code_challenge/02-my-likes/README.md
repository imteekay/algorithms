# Problem

Given an array of posts and an array of your likes, how could you effeciently check if you liked a particular post or not?

## Example data

```js
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
  }
  ...
];

const likes = [
  { id: 1, postId: 5 },
  { id: 2, postId: 10 },
  { id: 3, postId: 124 },
  ...
];
```

### Notes

- The `posts` array may contain posts from various users
- The `likes` array only contains **your** likes
- It's possible that many different users can like the same post
