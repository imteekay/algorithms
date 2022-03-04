import { describe, it, expect } from 'vitest';
import { ListNode, mergeNodes } from '../merge-nodes-in-between-zeros';

function buildList(nums, initValue = 0) {
  let head = new ListNode(initValue);
  let node = head;
  let nextNode;

  for (let i = 1; i < nums.length; i++) {
    nextNode = new ListNode(nums[i]);
    node.next = nextNode;
    node = node.next;
  }

  return head;
}

describe('mergeNodes', () => {
  it('removes zeros and merges nodes', () => {
    const head = buildList([0, 3, 1, 0, 4, 5, 2, 0]);
    const result = buildList([4, 11], 4);
    expect(mergeNodes(head)).toEqual(result);
  });

  it('removes zeros and merges nodes', () => {
    const head = buildList([0, 1, 0, 3, 0, 2, 2, 0]);
    const result = buildList([1, 3, 4], 1);
    expect(mergeNodes(head)).toEqual(result);
  });
});
