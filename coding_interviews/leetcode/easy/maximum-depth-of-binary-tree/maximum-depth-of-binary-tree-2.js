function getMaximumDepth(node, depth) {
  if (!node) {
    return depth;
  }

  return Math.max(
    depth + 1,
    getMaximumDepth(node.left, depth + 1),
    getMaximumDepth(node.right, depth + 1)
  );
}

function maxDepth(root) {
  if (!root) {
    return 0;
  }

  return Math.max(
    1,
    getMaximumDepth(root.left, 1),
    getMaximumDepth(root.right, 1)
  );
}
