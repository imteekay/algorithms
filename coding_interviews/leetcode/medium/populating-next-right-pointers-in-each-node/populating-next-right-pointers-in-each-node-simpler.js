function dfs(node, next) {
  if (!node) return;

  node.next = next;

  dfs(node.left, node.right);
  dfs(node.right, next && next.left);
}

function connect(root) {
  dfs(root, null);
  return root;
}
