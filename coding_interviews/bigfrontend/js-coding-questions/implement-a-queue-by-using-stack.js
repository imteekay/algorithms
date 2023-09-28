// https://bigfrontend.dev/problem/implement-a-queue-by-using-stack

class Queue {
  constructor() {
    this.stack = new Stack();
  }

  enqueue(element) {
    this.stack.push(element);
  }

  peek() {
    let tempStack = new Stack();
    let peekElement;

    while (this.size() > 0) {
      peekElement = this.stack.pop();
      tempStack.push(peekElement);
    }

    while (tempStack.size() > 0) {
      this.stack.push(tempStack.pop());
    }

    return peekElement;
  }

  size() {
    return this.stack.size();
  }

  dequeue() {
    let tempStack = new Stack();
    let peekElement;

    while (this.size() > 0) {
      peekElement = this.stack.pop();
      if (this.size() > 0) tempStack.push(peekElement);
    }

    while (tempStack.size() > 0) {
      this.stack.push(tempStack.pop());
    }

    return peekElement;
  }
}
