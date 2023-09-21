# Problem

We've focused mostly on a bunch of algorithm problems lately, so let's take a break from that for a little while.

This is going to be a slightly easier problem than the past few as well, so it is a good chance to take a breather, apply some of the concepts we've learned, and as usual, to think about a number of different ways we can solve this problem to find a truly great answer.

So, the problem is this:

Given an array of objects containing urls to an image of various sizes, write a function that will efficiently return an array of strings containing only the urls to the `large` image.

## Example input

```js
[
  {
    tiny: '//imageurl.../50x50/image_1.png',
    large: '//imageurl.../1200x1600/image_1.png',
  },
  {
    tiny: '//imageurl.../50x50/image_2.png',
    large: '//imageurl.../1200x1600/image_2.png',
  },
  {
    tiny: '//imageurl.../50x50/image_3.png',
    large: '//imageurl.../1200x1600/image_3.png',
  },
  {
    tiny: '//imageurl.../50x50/image_4.png',
    large: '//imageurl.../1200x1600/image_4.png',
  },
  {
    tiny: '//imageurl.../50x50/image_5.png',
    large: '//imageurl.../1200x1600/image_5.png',
  },
  ...
];
```

## Expected output

```js
['//imageurl.../1200x1600/image_1.png', '//imageurl.../1200x1600/image_2.png', ...];
```

## Notes

- The input array could be really long or really short
- The input array will always be an array and it will always have at least one object
- The object will always contain the key `large`, and you can ignore other keys if they are present

## Tips

As I will often say on Weekend Code Challenge, it is really important to think of multiple solutions to each problem so as to avoid using the same techniques, which can become stale over time.

Apply a variety of methods and built-in functions and try to find a solution that is not only efficient, but also easy to read and understand.
