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
