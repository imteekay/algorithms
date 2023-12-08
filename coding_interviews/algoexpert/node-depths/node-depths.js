// Runtime: O(N), N = number of nodes
// Space: O(H), H = height of the tree

function nodeDepths(root, sum = 0) {
  if (!root) return 0;
  return sum + nodeDepths(root.left, sum + 1) + nodeDepths(root.right, sum + 1);
}
