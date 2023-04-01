function getMinimumDifference(root, rootVal = Infinity) {
  if (!root) return Infinity;
  return Math.min(
    Math.abs(root.val - rootVal),
    getMinimumDifference(root.left, root.val),
    getMinimumDifference(root.right, root.val)
  );
}
