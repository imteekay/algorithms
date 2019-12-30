const createStack = () => {
  let items = [];

  const push = (item) => items = [item, ...items];
  const pop = () => items = items.slice(1);
  const top = () => items[0];
  const isEmpty = () => size() === 0;
  const size = () => items.length;
  const getItems = () => items;

  return {
    push,
    pop,
    top,
    isEmpty,
    size,
    getItems
  };
};

// testing
const stack = createStack();

console.log(stack.isEmpty());

stack.push(1);
console.log(stack.getItems());
stack.push(2);
console.log(stack.getItems());
stack.push(3);
console.log(stack.getItems());
stack.push(4);
console.log(stack.getItems());
stack.push(5);
console.log(stack.getItems());

console.log(stack.top());
console.log(stack.size());
console.log(stack.isEmpty());

stack.pop();
console.log(stack.getItems());
stack.pop();
console.log(stack.getItems());
stack.pop();
console.log(stack.getItems());
stack.pop();
console.log(stack.getItems());

console.log(stack.isEmpty());
console.log(stack.top());
stack.pop();
console.log(stack.getItems());
console.log(stack.isEmpty());
console.log(stack.size());
