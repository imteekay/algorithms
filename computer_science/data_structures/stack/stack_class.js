class Stack {
  constructor() {
    this.items = [];
  }

  push(item) {
    this.items = [item, ...this.items];
  }

  pop() {
    this.items = this.items.slice(1);
  }

  top() {
    return this.items[0];
  }

  isEmpty() {
    return this.size() === 0;
  }

  size() {
    return this.items.length;
  }
}

// testing
const stack = new Stack();

console.log(stack.isEmpty());

stack.push(1);
console.log(stack.items);
stack.push(2);
console.log(stack.items);
stack.push(3);
console.log(stack.items);
stack.push(4);
console.log(stack.items);
stack.push(5);
console.log(stack.items);

console.log(stack.isEmpty());
console.log(stack.top());

stack.pop();
console.log(stack.items);
stack.pop();
console.log(stack.items);
stack.pop();
console.log(stack.items);
stack.pop();
console.log(stack.items);

console.log(stack.isEmpty());

stack.pop();
console.log(stack.items);

console.log(stack.isEmpty());
console.log(stack.top());
