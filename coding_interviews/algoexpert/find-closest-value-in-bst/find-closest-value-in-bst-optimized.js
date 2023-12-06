// Runtime
// - average: O(logN), where N = number of nodes in the tree
// - worst case: O(N), where N = number of nodes in the tree
// Space: O(1)

function findClosestValueInBst(tree, target, closestValue = Infinity) {
  if (!tree) {
    return closestValue;
  }

  if (tree.value === target) {
    return target;
  }

  let currentDiff = Math.abs(tree.value - target);
  let diff = Math.abs(closestValue - target);
  let newClosestValue = currentDiff <= diff ? tree.value : closestValue;
  let leftValue =
    target < tree.value
      ? findClosestValueInBst(tree.left, target, newClosestValue)
      : newClosestValue;
  let rightValue =
    target > tree.value
      ? findClosestValueInBst(tree.right, target, newClosestValue)
      : newClosestValue;
  let leftDiff = Math.abs(leftValue - target);
  let rightDiff = Math.abs(rightValue - target);

  if (currentDiff <= leftDiff && currentDiff <= rightDiff) {
    return tree.value;
  } else if (leftDiff <= rightDiff) {
    return leftValue;
  }

  return rightValue;
}
