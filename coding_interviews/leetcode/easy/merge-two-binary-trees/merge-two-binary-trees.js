function mergeTrees(root1, root2) {
  let root = new TreeNode();

  if (root1 && root2) {
    root.val = root1.val + root2.val;
    root.left = mergeTrees(root1.left, root2.left);
    root.right = mergeTrees(root1.right, root2.right);
  } else if (root1) {
    root = root1;
  } else if (root2) {
    root = root2;
  } else {
    return null;
  }

  return root;
}
