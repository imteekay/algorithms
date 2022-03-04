export class Node {
  constructor(value, next = null) {
    this.value = value;
    this.next = next;
  }
}

export class LinkedList {
  constructor() {
    this.head = null;
  }

  pushFront(value) {
    this.head = new Node(value, this.head);
  }

  pushBack(value) {
    if (this.isEmpty()) {
      this.head = new Node(value);
      return;
    }

    let currentNode = this.head;

    while (currentNode && currentNode.next) {
      currentNode = currentNode.next;
    }

    currentNode.next = new Node(value);
  }

  size() {
    let count = 0;
    let currentNode = this.head;

    while (currentNode) {
      count += 1;
      currentNode = currentNode.next;
    }

    return count;
  }

  search(value) {
    let currentNode = this.head;

    while (currentNode && currentNode.value !== value) {
      currentNode = currentNode.next;
    }

    return Boolean(currentNode);
  }

  remove(value) {
    if (this.isEmpty()) {
      return;
    }

    if (this.head.value === value) {
      this.head = this.head.next;
      return;
    }

    let currentNode = this.head;

    while (currentNode.next) {
      if (currentNode.next.value === value) {
        currentNode.next = currentNode.next.next;
        return;
      }

      currentNode = currentNode.next;
    }
  }

  isEmpty() {
    return this.head === null;
  }
}
