/*
TreeNode {
  value: int
  left: TreeNode | null
  right: TreeNode | null
}
*/

function inorder(node) {
  if (!node) return;
  inorder(node.left);
  node.value;
  inorder(node.right);
}
