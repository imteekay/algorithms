import { describe, expect, it } from 'vitest';
import { BinaryTree } from '.';

describe('BinaryTree', () => {
  it('instantiates a BinaryTree', () => {
    const tree = new BinaryTree('a');
    expect(tree.value).toEqual('a');
    expect(tree.right).toEqual(null);
    expect(tree.left).toEqual(null);
  });

  describe('inserts a left node', () => {
    it('with a left child', () => {
      const tree = new BinaryTree('a');
      tree.left = new BinaryTree('b');
      tree.insertLeft('c');
      expect(tree.left.value).toEqual('c');
      expect(tree.left.left.value).toEqual('b');
    });

    it('without a left child', () => {
      const tree = new BinaryTree('a');
      tree.insertLeft('b');
      expect(tree.left.value).toEqual('b');
    });
  });

  describe('inserts a right node', () => {
    it('with a right child', () => {
      const tree = new BinaryTree('a');
      tree.right = new BinaryTree('b');
      tree.insertRight('c');
      expect(tree.right.value).toEqual('c');
      expect(tree.right.right.value).toEqual('b');
    });

    it('without a right child', () => {
      const tree = new BinaryTree('a');
      tree.insertRight('b');
      expect(tree.right.value).toEqual('b');
    });
  });

  describe('traversal', () => {
    const root = new BinaryTree(1);
    const two = new BinaryTree(2);
    const three = new BinaryTree(3);
    const four = new BinaryTree(4);
    const five = new BinaryTree(5);
    const six = new BinaryTree(6);
    const seven = new BinaryTree(7);

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
});
