// Runtime: O(N), where N = number of nodes in the tree
// Space: O(1)

function findClosestValueInBst(tree, target, closestValue = Infinity) {
  if (!tree) {
    return closestValue;
  }

  let currentDiff = Math.abs(tree.value - target);
  let diff = Math.abs(closestValue - target);
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
