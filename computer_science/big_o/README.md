# Big O

A generalize way to categorize an algorithm time and space based on input.

- Growth based on input
- Drop constants
- Consider the worst case

## Big O complexity

- O(1)
- O(logn)
- O(n)
- O(nlogn)
- O(n^2)
- O(n!)

## Examples

### O(n)

```javascript
function sumCharCodes(n) {
  let sum = 0;

  for (let i = 0; i < n.length; ++i) {
    sum += n.charCodeAt(i);
  }

  for (let i = 0; i < n.length; ++i) {
    sum += n.charCodeAt(i);
  }

  return sum;
}
```

### O(n^2)

```javascript
function sumCharCodes(n) {
  let sum = 0;

  for (let i = 0; i < n.length; ++i) {
    for (let j = 0; j < n.length; ++j) {
      sum += charCode;
    }
  }

  return sum;
}
```

### O(n^3)

```javascript
function sumCharCodes(n) {
  let sum = 0;

  for (let i = 0; i < n.length; ++i) {
    for (let j = 0; j < n.length; ++j) {
      for (let k = 0; k < n.length; ++k) {
        sum += charCode;
      }
    }
  }

  return sum;
}
```
