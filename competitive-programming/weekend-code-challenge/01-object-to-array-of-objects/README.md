# Problem

What if you have an object and you want to convert that to an array of objects to do whatever you need to do?

## Example data

```js
const ingredients = {
  cheese: 0,
  lettuce: 0,
  bacon: 1,
  meat: 4,
};
```

## Expected output

```js
const output = [
  { name: 'lettuce', count: 0 },
  { name: 'bacon', count: 0 },
  { name: 'cheese', count: 1 },
  { name: 'meat', count: 4 },
];
```
