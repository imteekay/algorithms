function traverse(node, list) {
  if (!node) return [];
  return [
    ...list,
    ...traverse(node.left, list),
    node.val,
    ...traverse(node.right, list),
  ];
}

function kthSmallest(root, k) {
  let list = traverse(root, []);
  return list[k - 1];
}
