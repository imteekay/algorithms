import { describe, expect, it } from 'vitest';
import { BinaryTree } from '.';

describe('BinaryTree', () => {
  it('instantiates a BinaryTree', () => {
    const tree = new BinaryTree('a');
    expect(tree.value).toEqual('a');
    expect(tree.right).toEqual(null);
    expect(tree.left).toEqual(null);
  });
});
