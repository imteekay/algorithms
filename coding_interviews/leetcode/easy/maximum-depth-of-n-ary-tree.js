function maxDepth(root, depth = 1) {
  if (!root) return depth - 1;

  let depths = [];

  for (let child of root.children) {
    const childDepth = maxDepth(child, depth + 1);
    depths.push(childDepth);
  }

  return depths.length ? Math.max(...depths) : depth;
}
