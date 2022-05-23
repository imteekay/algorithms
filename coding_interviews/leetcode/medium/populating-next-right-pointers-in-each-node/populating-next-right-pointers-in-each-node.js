function connectHelperRight(node) {
  if (!node) {
    return;
  }

  connectHelper(node.left, node.right);
  connectHelperRight(node.right);
}

function connectHelper(node, next) {
  if (!node || !next) {
    return;
  }

  node.next = next;

  connectHelper(node.left, node.right);
  connectHelper(node.right, next.left);
}

function connect(root) {
  if (!root) {
    return root;
  }

  connectHelper(root.left, root.right);
  connectHelperRight(root.right);

  return root;
}
