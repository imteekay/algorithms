function evaluateExpressionTree(tree) {
  if (!tree) return null;

  let leftValue = evaluateExpressionTree(tree.left);
  let rightValue = evaluateExpressionTree(tree.right);

  if (!leftValue && !rightValue) return tree.value;

  if (tree.value === -1) return leftValue + rightValue;
  if (tree.value === -2) return leftValue - rightValue;
  if (tree.value === -3) return Math.trunc(leftValue / rightValue);
  if (tree.value === -4) return leftValue * rightValue;
}
