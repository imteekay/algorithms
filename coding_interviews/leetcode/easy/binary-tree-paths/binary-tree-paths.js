function traversal(node, paths, path) {
  if (!node.left && !node.right) {
    paths.push(path.join('->'));
  }

  if (node.left) {
    traversal(node.left, paths, [...path, node.left.val]);
  }

  if (node.right) {
    traversal(node.right, paths, [...path, node.right.val]);
  }
}

function binaryTreePaths(root) {
  let paths = [];
  traversal(root, paths, [root.val]);
  return paths;
}
