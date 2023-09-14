/**
 * https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list
 *
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */

function calculateGCD(x, y) {
  x = Math.abs(x);
  y = Math.abs(y);
  while (y) {
    var t = y;
    y = x % y;
    x = t;
  }
  return x;
}

function insertGreatestCommonDivisors(head) {
  if (!head.next) return head;

  let curr = head;
  let next = head.next;

  while (next) {
    let newNode = new ListNode(calculateGCD(curr.val, next.val), next);
    curr.next = newNode;
    curr = next;
    next = next.next;
  }

  return head;
}
