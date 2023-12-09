function evaluateExpressionTree({ value, left, right }) {
  if (value === -1)
    return evaluateExpressionTree(left) + evaluateExpressionTree(right);
  if (value === -2)
    return evaluateExpressionTree(left) - evaluateExpressionTree(right);
  if (value === -3)
    return Math.trunc(
      evaluateExpressionTree(left) / evaluateExpressionTree(right)
    );
  if (value === -4)
    return evaluateExpressionTree(left) * evaluateExpressionTree(right);
  return value;
}
