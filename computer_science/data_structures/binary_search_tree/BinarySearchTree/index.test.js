import { describe, expect, it } from 'vitest';
import { BinarySearchTree } from '.';

function buildBST() {
  const tree = new BinarySearchTree(50);

  tree.insertNode(21);
  tree.insertNode(4);
  tree.insertNode(32);
  tree.insertNode(76);
  tree.insertNode(64);
  tree.insertNode(52);
  tree.insertNode(100);

  return tree;
}

describe('BinarySearchTree', () => {
  it('instantiates a BinarySearchTree', () => {
    const tree = new BinarySearchTree('a');
    expect(tree.value).toEqual('a');
    expect(tree.right).toEqual(null);
    expect(tree.left).toEqual(null);
  });

  describe('inserts a left node', () => {
    it('with a left child', () => {
      const tree = new BinarySearchTree('a');
      tree.left = new BinarySearchTree('b');
      tree.insertLeft('c');
      expect(tree.left.value).toEqual('c');
      expect(tree.left.left.value).toEqual('b');
    });

    it('without a left child', () => {
      const tree = new BinarySearchTree('a');
      tree.insertLeft('b');
      expect(tree.left.value).toEqual('b');
    });
  });

  describe('inserts a right node', () => {
    it('with a right child', () => {
      const tree = new BinarySearchTree('a');
      tree.right = new BinarySearchTree('b');
      tree.insertRight('c');
      expect(tree.right.value).toEqual('c');
      expect(tree.right.right.value).toEqual('b');
    });

    it('without a right child', () => {
      const tree = new BinarySearchTree('a');
      tree.insertRight('b');
      expect(tree.right.value).toEqual('b');
    });
  });

  describe('traversal', () => {
    const root = new BinarySearchTree(1);
    const two = new BinarySearchTree(2);
    const three = new BinarySearchTree(3);
    const four = new BinarySearchTree(4);
    const five = new BinarySearchTree(5);
    const six = new BinarySearchTree(6);
    const seven = new BinarySearchTree(7);

    two.left = three;
    two.right = four;

    five.left = six;
    five.right = seven;

    root.left = two;
    root.right = five;

    it('traverses in pre order', () => {
      console.log('====== pre order ======');
      root.preOrder();
      console.log('====== // ======');
    });

    it('traverses in order', () => {
      console.log('====== in order ======');
      root.inOrder();
      console.log('====== // ======');
    });

    it('traverses in post order', () => {
      console.log('====== post order ======');
      root.postOrder();
      console.log('====== // ======');
    });

    it('traverses via breadth first search', () => {
      console.log('====== bfs ======');
      root.bfs();
      console.log('====== // ======');
    });
  });

  it('inserts nodes to the BST', () => {
    const tree = buildBST();

    expect(tree.value).toEqual(50);
    expect(tree.left.value).toEqual(21);
    expect(tree.left.left.value).toEqual(4);
    expect(tree.left.right.value).toEqual(32);
    expect(tree.right.value).toEqual(76);
    expect(tree.right.left.value).toEqual(64);
    expect(tree.right.left.left.value).toEqual(52);
    expect(tree.right.right.value).toEqual(100);
  });

  describe('findNode', () => {
    it('finds the node in the tree', () => {
      const tree = buildBST();

      expect(tree.findNode(50)).toEqual(true);
      expect(tree.findNode(21)).toEqual(true);
      expect(tree.findNode(4)).toEqual(true);
      expect(tree.findNode(32)).toEqual(true);
      expect(tree.findNode(76)).toEqual(true);
      expect(tree.findNode(64)).toEqual(true);
      expect(tree.findNode(52)).toEqual(true);
      expect(tree.findNode(100)).toEqual(true);
      expect(tree.findNode(0)).toEqual(false);
      expect(tree.findNode(999)).toEqual(false);
    });
  });

  describe('removeNode', () => {
    it('removes a node in the tree', () => {
      const tree = buildBST();

      expect(tree.findNode(4)).toEqual(true);
      expect(tree.removeNode(4, tree)).toEqual(true);
      expect(tree.findNode(4)).toEqual(false);
    });

    it('removes a node in the middle of the left subtree', () => {
      const tree = buildBST();

      expect(tree.findNode(21)).toEqual(true);
      expect(tree.removeNode(21, tree)).toEqual(true);
      expect(tree.findNode(21)).toEqual(false);

      expect(tree.value).toEqual(50);
      expect(tree.left.value).toEqual(32);
      expect(tree.left.left.value).toEqual(4);
      expect(tree.right.value).toEqual(76);
      expect(tree.right.left.value).toEqual(64);
      expect(tree.right.left.left.value).toEqual(52);
      expect(tree.right.right.value).toEqual(100);
    });

    it('removes a node in the middle of the right subtree', () => {
      const tree = buildBST();

      expect(tree.findNode(76)).toEqual(true);
      expect(tree.removeNode(76, tree)).toEqual(true);
      expect(tree.findNode(76)).toEqual(false);

      expect(tree.value).toEqual(50);
      expect(tree.left.value).toEqual(21);
      expect(tree.left.left.value).toEqual(4);
      expect(tree.left.right.value).toEqual(32);
      expect(tree.right.value).toEqual(100);
      expect(tree.right.left.value).toEqual(64);
      expect(tree.right.left.left.value).toEqual(52);
    });
  });
});
