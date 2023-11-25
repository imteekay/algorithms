// https://leetcode.com/problems/binary-tree-tilt

/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */

function sumNodes(node) {
  if (!node) return 0;
  return node.val + sumNodes(node.left) + sumNodes(node.right);
}

function findTilt(root) {
  if (!root) return 0;
  return (
    Math.abs(sumNodes(root.left) - sumNodes(root.right)) +
    findTilt(root.left) +
    findTilt(root.right)
  );
}
