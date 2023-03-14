import { Queue } from '../../queue/queue';

export class BinarySearchTree {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }

  insertLeft(value) {
    if (this.left) {
      const node = new BinarySearchTree(value);
      node.left = this.left;
      this.left = node;
    } else {
      this.left = new BinarySearchTree(value);
    }
  }

  insertRight(value) {
    if (this.right) {
      const node = new BinarySearchTree(value);
      node.right = this.right;
      this.right = node;
    } else {
      this.right = new BinarySearchTree(value);
    }
  }

  preOrder() {
    console.log(this.value);
    if (this.left) this.left.preOrder();
    if (this.right) this.right.preOrder();
  }

  inOrder() {
    if (this.left) this.left.inOrder();
    console.log(this.value);
    if (this.right) this.right.inOrder();
  }

  postOrder() {
    if (this.left) this.left.postOrder();
    if (this.right) this.right.postOrder();
    console.log(this.value);
  }

  bfs() {
    const queue = new Queue();
    queue.enqueue(this);

    while (!queue.isEmpty()) {
      const node = queue.dequeue();
      console.log(node.value);
      if (node.left) queue.enqueue(node.left);
      if (node.right) queue.enqueue(node.right);
    }
  }

  insertNode(value) {
    if (value <= this.value && this.left) {
      this.left.insertNode(value);
    } else if (value <= this.value) {
      this.left = new BinarySearchTree(value);
    } else if (value > this.value && this.right) {
      this.right.insertNode(value);
    } else {
      this.right = new BinarySearchTree(value);
    }
  }

  findNode(value) {
    if (value < this.value && this.left) {
      return this.left.findNode(value);
    }

    if (value > this.value && this.right) {
      return this.right.findNode(value);
    }

    return this.value === value;
  }

  removeNode(value, parent) {
    if (value < this.value && this.left) {
      return this.left.removeNode(value, this);
    }

    if (value < this.value) {
      return false;
    }

    if (value > this.value && this.right) {
      return this.right.removeNode(value, this);
    }

    if (value > this.value) {
      return false;
    }

    if (this.left === null && this.right === null && this == parent.left) {
      parent.left = null;
      this.clearNode();
      return true;
    }

    if (this.left === null && this.right === null && this == parent.right) {
      parent.right = null;
      this.clearNode();
      return true;
    }

    if (this.left && this.right === null && this == parent.left) {
      parent.left = this.left;
      this.clearNode();
      return true;
    }

    if (this.left && this.right === null && this == parent.right) {
      parent.right = this.left;
      this.clearNode();
      return true;
    }

    if (this.right && this.left === null && this == parent.left) {
      parent.left = this.right;
      this.clearNode();
      return true;
    }

    if (this.right && this.left === null && this == parent.right) {
      parent.right = this.right;
      this.clearNode();
      return true;
    }

    this.value = this.right.findMinimumValue();
    this.right.removeNode(this.value, this);
    return true;
  }

  clearNode() {
    this.value = null;
    this.left = null;
    this.right = null;
  }

  findMinimumValue() {
    if (this.left) return this.left.findMinimumValue();
    return this.value;
  }
}
