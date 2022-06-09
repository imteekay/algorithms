function isSame(root, subRoot) {
  if (!root && !subRoot) return true;
  if (!root || !subRoot || root.val !== subRoot.val) return false;
  return isSame(root.left, subRoot.left) && isSame(root.right, subRoot.right);
}

function isSubtree(root, subRoot) {
  return root
    ? isSame(root, subRoot) ||
        isSubtree(root.left, subRoot) ||
        isSubtree(root.right, subRoot)
    : false;
}
