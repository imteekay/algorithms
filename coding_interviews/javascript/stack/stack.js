let stack = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

function push(stack, value) {
  stack.push(value);
}

function pop(stack) {
  return stack.pop();
}

function top(stack) {
  return stack[stack.length - 1];
}

function isEmpty(stack) {
  return stack.length === 0;
}

console.log(stack); // [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

push(stack, 11);
console.log(stack); // [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]

pop(stack); // 11
console.log(stack); // [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

top(stack); // 10
isEmpty(stack); // false

while (!isEmpty(stack)) {
  stack.pop();
}

isEmpty(stack); // true
console.log(stack);
