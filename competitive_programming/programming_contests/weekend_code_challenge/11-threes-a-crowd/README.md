# Problem

This is a simple real life problem that I recently encountered.

Given an array of n values, create a new array of two-value arrays containing the original values. Each two-value array will contain the largest and smallest value from the initial array, and each value will only appear once within the set.

If n is an odd number, the final array will include that additional value, making it the exception to the two-value rule.

## Example input (given n = 7)

```js
[3, 7, 10, 5, 4, 4, 1];
```

## Expected output

```js
[
  [10, 1],
  [7, 3],
  [5, 4, 4],
];
```

## Notes

## Tips
