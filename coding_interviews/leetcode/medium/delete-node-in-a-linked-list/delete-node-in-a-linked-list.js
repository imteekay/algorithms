// https://leetcode.com/problems/delete-node-in-a-linked-list

/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 * @param {ListNode} node
 * @return {void} Do not return anything, modify node in-place instead.
 */
function deleteNode(node) {
  if (node.next && !node.next.next) {
    node.val = node.next.val;
    node.next = null;
    return;
  }

  node.val = node.next.val;
  deleteNode(node.next);
}
