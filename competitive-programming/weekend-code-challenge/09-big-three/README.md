# Problem

This is a classic problem, and a variation on an even more classic problem, which is to find the largest value in an array.

Difference here is that you need to find the 3 largest values in the array. And they need to be returned in ascending order.

So, to put it clearly, given an array of integers, write a function that will return an array of the 3 largest numbers from that array.

Sample input:

```js
[3, -100, 199, 10, 14, 555]
```

Expected output:

```js
[14, 199, 555]
```

## Notes:

- The array will not be sorted, and you cannot sort it to solve this problem -- that would be too easy ;)
- There will always be at least 3 values in the input array, and they will always be integers.
- There may be duplicates of the same integers. Potentially all 3 values could be the same number if those are the largest integers in the array.
