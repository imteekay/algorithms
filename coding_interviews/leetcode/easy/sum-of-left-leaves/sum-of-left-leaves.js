function sumOfLeftLeaves(root, isLeft = false) {
  if (!root) return 0;
  if (!root.left && !root.right && isLeft) return root.val;
  return sumOfLeftLeaves(root.left, true) + sumOfLeftLeaves(root.right, false);
}
