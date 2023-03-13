import { describe, expect, it } from 'vitest';
import { BinarySearchTree } from '.';

describe('BinarySearchTree', () => {
  const tree = new BinarySearchTree(50);

  tree.insertNode(21);
  tree.insertNode(4);
  tree.insertNode(32);
  tree.insertNode(76);
  tree.insertNode(64);
  tree.insertNode(52);
  tree.insertNode(100);

  it('inserts nodes to the BST', () => {
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
});
