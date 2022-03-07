import { describe, it, expect } from 'vitest';
import { mergeTwoLists, ListNode } from '../merge-two-sorted-lists';

function buildList(nums) {
  if (nums.length === 0) {
    return null;
  }

  let head = new ListNode(nums[0]);
  let node = head;
  let nextNode;

  for (let i = 1; i < nums.length; i++) {
    nextNode = new ListNode(nums[i]);
    node.next = nextNode;
    node = node.next;
  }

  return head;
}

describe('mergeTwoLists', () => {
  it('', () => {
    const list1 = buildList([1, 2, 4]);
    const list2 = buildList([1, 3, 4]);
    const result = buildList([1, 1, 2, 3, 4, 4]);

    expect(mergeTwoLists(list1, list2)).toEqual(result);
  });

  it('', () => {
    const list1 = buildList([]);
    const list2 = buildList([]);
    const result = buildList([]);

    expect(mergeTwoLists(list1, list2)).toEqual(result);
  });

  it('', () => {
    const list1 = buildList([]);
    const list2 = buildList([0]);
    const result = buildList([0]);

    expect(mergeTwoLists(list1, list2)).toEqual(result);
  });
});
