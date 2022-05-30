/*
TreeNode {
  value: int
  left: TreeNode | null
  right: TreeNode | null
}
*/

function postorder(node) {
  if (!node) return;
  postorder(node.left);
  postorder(node.right);
  node.value;
}
