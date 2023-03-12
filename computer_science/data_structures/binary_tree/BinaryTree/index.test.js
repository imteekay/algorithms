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
});
