/*
TreeNode {
  value: int
  left: TreeNode | null
  right: TreeNode | null
}
*/

function preorder(node) {
  if (!node) return;
  node.value;
  preorder(node.left);
  preorder(node.right);
}
