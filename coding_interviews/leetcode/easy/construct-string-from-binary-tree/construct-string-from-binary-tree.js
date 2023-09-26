// https://leetcode.com/problems/construct-string-from-binary-tree

/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */

// Time complexity : O(n). The preorder traversal is done over the n nodes of the given Binary Tree.
// Space complexity : O(n). The depth of the recursion tree can go upto n in case of a skewed tree.

function tree2str(root) {
  if (!root) return '';

  let left = tree2str(root.left);
  let right = tree2str(root.right);

  if (right) {
    return `${root.val}(${left})(${right})`;
  }

  if (left) {
    return `${root.val}(${left})`;
  }

  return root.val.toString();
}
