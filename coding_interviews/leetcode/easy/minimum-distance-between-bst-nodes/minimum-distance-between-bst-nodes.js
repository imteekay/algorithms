function traverse(node, list) {
  if (!node) return;
  traverse(node.left, list);
  list.push(node.val);
  traverse(node.right, list);
}

function getMinDiff(list) {
  let minDiff = Infinity;
  let previous = list[0];

  for (let index = 1; index < list.length; index++) {
    if (list[index] - previous < minDiff) minDiff = list[index] - previous;
    previous = list[index];
  }

  return minDiff;
}

function minDiffInBST(root) {
  let list = [];
  traverse(root, list);
  return getMinDiff(list);
}
