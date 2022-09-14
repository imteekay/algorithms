function isUnivalTree(root) {
  if (!root) return true;

  const leftResult = isUnivalTree(root.left);
  const rightResult = isUnivalTree(root.right);

  let result = true;

  result = root.left ? root.val === root.left.val : result;
  result = root.right ? result && root.val === root.right.val : result;

  return result && leftResult && rightResult;
}
