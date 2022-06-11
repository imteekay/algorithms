// Solution 1
// additional memory usage: array

function traverse(node, list) {
  return node
    ? [
        ...list,
        ...traverse(node.left, list),
        node.val,
        ...traverse(node.right, list),
      ]
    : [];
}

function kthSmallest(root, k) {
  return traverse(root, [])[k - 1];
}

// =========================== // ===========================

// Solution 2
// Less memory
let counter;
let nodeValue;

function traverseAndGetKthSmallest(node, k) {
  if (!node) return;

  traverseAndGetKthSmallest(node.left, k);
  counter++;

  if (counter === k) {
    nodeValue = node.val;
  }

  traverseAndGetKthSmallest(node.right, k);
}

function kthSmallest(root, k) {
  counter = 0;
  nodeValue = -1;
  traverseAndGetKthSmallest(root, k);
  return nodeValue;
}
