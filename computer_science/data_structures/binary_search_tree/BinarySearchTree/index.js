export class BinarySearchTree {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
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
}
