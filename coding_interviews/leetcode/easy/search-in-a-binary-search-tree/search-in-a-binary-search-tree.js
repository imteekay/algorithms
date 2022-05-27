function searchBST(root, val) {
  if (!root) {
    return null;
  }

  if (root.val === val) {
    return root;
  }

  return searchBST(root.left, val) || searchBST(root.right, val);
}
