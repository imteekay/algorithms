function lowestCommonAncestor(root, p, q) {
  if (root === p || root === q) {
    return root;
  }

  if (
    (p.val < root.val && q.val > root.val) ||
    (p.val > root.val && q.val < root.val)
  ) {
    return root;
  }

  if (p.val < root.val && q.val < root.val) {
    return lowestCommonAncestor(root.left, p, q);
  }

  if (p.val > root.val && q.val > root.val) {
    return lowestCommonAncestor(root.right, p, q);
  }
}
