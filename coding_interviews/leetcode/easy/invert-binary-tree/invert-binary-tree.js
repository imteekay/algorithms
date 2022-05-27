function invertTree(root) {
  if (!root) {
    return root;
  }

  let leftNode = root.left;
  let rightNode = root.right;

  root.left = invertTree(rightNode);
  root.right = invertTree(leftNode);

  return root;
}
