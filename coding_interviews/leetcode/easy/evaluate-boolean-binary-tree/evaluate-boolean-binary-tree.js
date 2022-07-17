const values = {
  or: 2,
  and: 3,
};

function evaluateTree(root) {
  if ([0, 1].includes(root.val)) return Boolean(root.val);

  const left = evaluateTree(root.left);
  const right = evaluateTree(root.right);

  return root.val === values.or ? left || right : left && right;
}
