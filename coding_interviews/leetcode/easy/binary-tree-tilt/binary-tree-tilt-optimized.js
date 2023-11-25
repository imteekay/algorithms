// https://leetcode.com/problems/binary-tree-tilt

/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */

let sum;

function sumNodes(node) {
  if (!node) return 0;

  let leftSum = sumNodes(node.left);
  let rightSum = sumNodes(node.right);

  sum += Math.abs(leftSum - rightSum);

  return node.val + leftSum + rightSum;
}

function findTilt(root) {
  sum = 0;
  sumNodes(root);
  return sum;
}
