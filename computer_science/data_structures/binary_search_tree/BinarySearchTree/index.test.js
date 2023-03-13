import { describe, expect, it } from 'vitest';
import { BinarySearchTree } from '.';

describe('BinarySearchTree', () => {
  it('inserts nodes to the BST', () => {
    const tree = new BinarySearchTree(50);

    tree.insertNode(21);
    tree.insertNode(4);
    tree.insertNode(32);
    tree.insertNode(76);
    tree.insertNode(64);
    tree.insertNode(52);
    tree.insertNode(100);

    expect(tree.value).toEqual(50);
    expect(tree.left.value).toEqual(21);
    expect(tree.left.left.value).toEqual(4);
    expect(tree.left.right.value).toEqual(32);
    expect(tree.right.value).toEqual(76);
    expect(tree.right.left.value).toEqual(64);
    expect(tree.right.left.left.value).toEqual(52);
    expect(tree.right.right.value).toEqual(100);
  });
});
