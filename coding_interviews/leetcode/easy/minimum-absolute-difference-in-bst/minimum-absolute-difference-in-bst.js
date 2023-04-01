function getMinimumDifference(root, rootVal = Infinity) {
  if (!root) return Infinity;
  return Math.min(
    Math.abs(root.val - rootVal),
    getMinimumDifference(root.left, root.val),
    getMinimumDifference(root.right, root.val)
  );
}

// ===============================================================

function traverse(node, list) {
  if (!node) return null;
  traverse(node.left, list);
  list.push(node.val);
  traverse(node.right, list);
}

function diff(list) {
  let minDiff = Infinity;
  let previous = list[0];

  for (let index = 1; index < list.length; index++) {
    minDiff = Math.min(list[index] - previous, minDiff);
    previous = list[index];
  }

  return minDiff;
}

function getMinimumDifference(root) {
  let list = [];
  traverse(root, list);
  return diff(list);
}
