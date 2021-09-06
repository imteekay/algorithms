// https://leetcode.com/problems/maximum-depth-of-binary-tree

const maxDepth = (root) => maxDepthHelper(root, 0);

const maxDepthHelper = (node, depth) => {
  if (!node) return depth;
  const leftDepth = maxDepthHelper(node.left, depth + 1);
  const rightDepth = maxDepthHelper(node.right, depth + 1);
  return Math.max(leftDepth, rightDepth);
};
