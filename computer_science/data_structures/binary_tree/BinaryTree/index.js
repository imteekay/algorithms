import { Queue } from '../../queue/queue';

export class BinaryTree {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }

  insertLeft(value) {
    if (this.left) {
      const node = new BinaryTree(value);
      node.left = this.left;
      this.left = node;
    } else {
      this.left = new BinaryTree(value);
    }
  }

  insertRight(value) {
    if (this.right) {
      const node = new BinaryTree(value);
      node.right = this.right;
      this.right = node;
    } else {
      this.right = new BinaryTree(value);
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
}
