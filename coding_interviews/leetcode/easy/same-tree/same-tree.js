function isSameTree(p, q) {
  if (!p && !q) return true;
  if ((!p && q) || (!q && p)) return false;

  return (
    p.val === q.val &&
    isSameTree(p.left, q.left) &&
    isSameTree(p.right, q.right)
  );
}
