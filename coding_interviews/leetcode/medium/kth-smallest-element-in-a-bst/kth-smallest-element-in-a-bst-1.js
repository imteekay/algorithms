function traverse(node, list) {
  return node
    ? [
        ...list,
        ...traverse(node.left, list),
        node.val,
        ...traverse(node.right, list),
      ]
    : [];
}

function kthSmallest(root, k) {
  return traverse(root, [])[k - 1];
}
