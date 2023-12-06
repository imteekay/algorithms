// Runtime
// - average: O(logN), where N = number of nodes in the tree
// - worst case: O(N), where N = number of nodes in the tree
// Space: O(1)

function abs(value) {
  return Math.abs(value);
}

function findClosestValueInBst(tree, target, closest = Infinity) {
  if (!tree) {
    return closest;
  }

  if (abs(tree.value - target) < abs(closest - target)) {
    closest = tree.value;
  }

  if (target === tree.value) {
    return closest;
  }

  if (target < tree.value) {
    return findClosestValueInBst(tree.left, target, closest);
  }

  return findClosestValueInBst(tree.right, target, closest);
}
