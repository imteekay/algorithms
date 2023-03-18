function inorder(root, nodes) {
  if (root.left) inorder(root.left, nodes);
  nodes.push(root.val);
  if (root.right) inorder(root.right, nodes);
}

function toBST(start, end, nodes) {
  if (start > end) return null;

  const middle = Math.floor((start + end) / 2);
  const bst = new TreeNode(nodes[middle]);

  bst.left = toBST(start, middle - 1, nodes);
  bst.right = toBST(middle + 1, end, nodes);

  return bst;
}

function balanceBST(root) {
  const nodes = [];
  inorder(root, nodes);
  return toBST(0, nodes.length - 1, nodes);
}
