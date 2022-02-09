/*
In a linked list of size n, where n is even, the ith node (0-indexed) of the linked list is known as the twin of the (n-1-i)th node, if 0 <= i <= (n / 2) - 1.

For example, if n = 4, then node 0 is the twin of node 3, and node 1 is the twin of node 2. These are the only nodes with twins for n = 4.
The twin sum is defined as the sum of a node and its twin.

Given the head of a linked list with even length, return the maximum twin sum of the linked list.

Input: head = [5,4,2,1]
Output: 6

Input: head = [4,2,2,3]
Output: 7

Input: head = [1,100000]
Output: 100001
*/

export function pairSum(list) {
  let maximumTwin = 0;

  for (let i = 0; i < Math.floor(list.length / 2); i++) {
    maximumTwin = Math.max(maximumTwin, list[i] + list[list.length - 1 - i]);
  }

  return maximumTwin;
}
