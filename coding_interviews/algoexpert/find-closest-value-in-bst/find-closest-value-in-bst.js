// Runtime: O(N), where N = number of nodes in the tree
// Space: O(1)

function findClosestValueInBst(tree, target, closestValue = null) {
  if (!tree) {
    return closestValue;
  }

  let currentDiff = Math.abs(tree.value - target);
  let diff = closestValue ? Math.abs(closestValue - target) : currentDiff;
  let leftValue = findClosestValueInBst(
    tree.left,
    target,
    currentDiff <= diff ? tree.value : closestValue
  );
  let rightValue = findClosestValueInBst(
    tree.right,
    target,
    currentDiff <= diff ? tree.value : closestValue
  );
  let leftDiff = Math.abs(leftValue - target);
  let rightDiff = Math.abs(rightValue - target);

  if (currentDiff <= leftDiff && currentDiff <= rightDiff) {
    return tree.value;
  } else if (leftDiff <= rightDiff) {
    return leftValue;
  }

  return rightValue;
}
