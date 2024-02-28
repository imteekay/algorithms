/**
BST Construction

Write a BST class for a Binary Search Tree. The class should support:

Inserting values with the insert method.
Removing values with the remove method; this method should only remove the first instance of a given value.
Searching for values with the contains method.
Note that you can't remove values from a single-node tree.
In other words, calling the remove method on a single-node tree should simply not do anything.

Each BST node has an integer value, a left child node, and a right child node.
A node is said to be a valid BST node if and only if it satisfies the BST property:
its value is strictly greater than the values of every node to its left;
its value is less than or equal to the values of every node to its right;
and its children nodes are either valid BST nodes themselves or None / null. 
*/

class BST {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }

  insert(value) {
    if (value < this.value) {
      if (this.left) this.left.insert(value);
      else this.left = new BST(value);
    } else {
      if (this.right) this.right.insert(value);
      else this.right = new BST(value);
    }

    return this;
  }

  contains(value) {
    if (this.value === value) {
      return true;
    }

    if (value < this.value) {
      return this.left ? this.left.contains(value) : false;
    }

    if (value >= this.value) {
      return this.right ? this.right.contains(value) : false;
    }

    return false;
  }

  remove(value, parent = null) {
    if (parent === null && this.left === null && this.right === null) return;

    if (value === this.value) {
      // when the node has children: get the smallest node from the right subtree and replace the removed node with this one
      if (this.left && this.right) {
        let smallestNodeValue = this.right._findSmallestNodeValue();
        this.right.remove(smallestNodeValue, this);
        this.value = smallestNodeValue;
        return this;
      }

      // when the node to be removed is a leaf node: just remove it
      if (!this.left && !this.right) {
        if (parent.left === this) parent.left = null;
        if (parent.right === this) parent.right = null;
      }

      // when the node to be removed only has one child node: point child node to the parent
      if (this.left) {
        let greatestNodeValue = this.left._findGreatestNodeValue();
        this.value = greatestNodeValue;
        this.left.remove(greatestNodeValue, this);
      }

      // when the node to be removed only has one child node: point child node to the parent
      if (this.right) {
        let smallestNodeValue = this.right._findSmallestNodeValue();
        this.value = smallestNodeValue;
        this.right.remove(smallestNodeValue, this);
      }
    }

    if (value < this.value) {
      if (this.left) {
        this.left.remove(value, this);
      }
    }

    if (value >= this.value) {
      if (this.right) {
        this.right.remove(value, this);
      }
    }

    return this;
  }

  _findSmallestNodeValue() {
    return this.left ? this.left._findSmallestNodeValue() : this.value;
  }

  _findGreatestNodeValue() {
    return this.right ? this.right._findGreatestNodeValue() : this.value;
  }
}
