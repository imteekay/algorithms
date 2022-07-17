const values = {
  false: 0,
  true: 1,
  or: 2,
  and: 3,
};

function evaluateTree(root) {
  // leaf node
  if ([0, 1].includes(root.val)) {
    return Boolean(root.val);
  }

  // non-leaf node
  const left = evaluateTree(root.left);
  const right = evaluateTree(root.right);

  return root.val === values.or ? left || right : left && right;
}
