export class Queue {
  constructor() {
    this.items = [];
  }

  enqueue(item) {
    this.items.push(item);
  }

  dequeue() {
    this.items.shift();
  }

  isEmpty() {
    return this.size() === 0;
  }

  front() {
    return this.items[0];
  }

  back() {
    return this.items[this.size() - 1];
  }

  size() {
    return this.items.length;
  }
}
