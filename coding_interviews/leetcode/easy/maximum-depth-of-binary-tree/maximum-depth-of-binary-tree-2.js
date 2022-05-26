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

// shorter without a helper function
function maxDepth(root, depth = 0) {
  return root
    ? Math.max(maxDepth(root.left, depth + 1), maxDepth(root.right, depth + 1))
    : depth;
}
