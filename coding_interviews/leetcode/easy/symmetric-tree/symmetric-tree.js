function symmetricNodes(node1, node2) {
  if ((!node1 && node2) || (node1 && !node2)) {
    return false;
  }

  if (!node1 && !node2) {
    return true;
  }

  return (
    node1.val === node2.val &&
    symmetricNodes(node1.left, node2.right) &&
    symmetricNodes(node1.right, node2.left)
  );
}

function isSymmetric(root) {
  if (!root) {
    return true;
  }

  return symmetricNodes(root.left, root.right);
}
