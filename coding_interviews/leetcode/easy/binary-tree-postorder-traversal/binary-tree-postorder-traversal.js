function postorderTraversal(root) {
  if (!root) {
    return [];
  }

  return [
    ...postorderTraversal(root.right),
    ...postorderTraversal(root.left),
    root.val,
  ];
}
