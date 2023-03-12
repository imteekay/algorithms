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
}
