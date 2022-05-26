function levelOrderTraversal(left, right) {
  if (!left && !right) {
    return [];
  }

  if (left && !right) {
    return [[left.val], ...levelOrderTraversal(left.left, left.right)];
  }

  if (!left && right) {
    return [[right.val], ...levelOrderTraversal(right.left, right.right)];
  }

  return [
    [left.val, right.val],
    ...levelOrderTraversal(left.left, left.right),
    ...levelOrderTraversal(right.left, right.right),
  ];
}

function levelOrder(root) {
  return root
    ? [[root.val], ...levelOrderTraversal(root.left, root.right)]
    : [];
}
