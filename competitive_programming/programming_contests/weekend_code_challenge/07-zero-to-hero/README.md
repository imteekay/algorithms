# Problem

This problem is a fun one because there are so many different ways to solve it. Which means you can come up with multiple answers, practice multiple techniques and compare the relative strengths and weaknesses. That's a triple bonus for a weekend code challenge problem.

So, the question is this:

Given an array of integers, write a function that will return an array where all the zeros in that array are moved to the back of the array.

For instance, given the following array:

```js
[9, 0, 133, -1, 2, 0, 9];
```

The correct output would look like this:

```js
[9, 133, -1, 2, 9, 0, 0];
```

## Notes

- There are no limitations on what you can do to the array. Feel free to mutate it in place if you like
- The best answer will be done in linear time, with constant space complexity
- Consider edge cases like if all the items were zeros (e.g. `[0, 0, 0, 0, 0, 0, 0]`) or if there are zeros at the beginning and end of your array (e.g. `[0, 0, 1, 33, -2, 0, 0]`)
