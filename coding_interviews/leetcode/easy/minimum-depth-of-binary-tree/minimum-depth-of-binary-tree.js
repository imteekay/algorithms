// https://leetcode.com/problems/minimum-depth-of-binary-tree

/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
function minDepth(node, depth = 1) {
  if (!node) return 0;
  if (!node.left && !node.right) return depth;
  if (!node.left) return minDepth(node.right, depth + 1);
  if (!node.right) return minDepth(node.left, depth + 1);
  return Math.min(
    minDepth(node.left, depth + 1),
    minDepth(node.right, depth + 1)
  );
}
