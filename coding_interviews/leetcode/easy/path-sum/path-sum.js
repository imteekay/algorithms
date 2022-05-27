function hasPathSum(root, targetSum, sum = 0) {
  if (!root) {
    return false;
  }

  if (!root.left && !root.right) {
    return sum + root.val === targetSum;
  }

  return (
    hasPathSum(root.left, targetSum, sum + root.val) ||
    hasPathSum(root.right, targetSum, sum + root.val)
  );
}
