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
}
