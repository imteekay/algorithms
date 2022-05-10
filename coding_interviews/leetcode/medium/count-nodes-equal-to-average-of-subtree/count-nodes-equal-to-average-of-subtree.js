function calculateAverage(totalValue, nodesCount) {
  return Math.floor(totalValue / nodesCount);
}

function averageHelper(node, count) {
  if (!node) {
    return { totalValue: 0, nodesCount: 0, equalToAverageCount: 0 };
  }

  const left = averageHelper(node.left, 1);
  const right = averageHelper(node.right, 1);

  const totalValue = node.val + left.totalValue + right.totalValue;
  const nodesCount = count + left.nodesCount + right.nodesCount;

  const average = calculateAverage(totalValue, nodesCount);

  const equalToAverageCount =
    (average === node.val ? 1 : 0) +
    left.equalToAverageCount +
    right.equalToAverageCount;

  return {
    totalValue,
    nodesCount,
    equalToAverageCount,
  };
}

function averageOfSubtree(root) {
  let totalValue = root.val;
  let nodesCount = 1;

  const left = averageHelper(root.left, nodesCount);
  const right = averageHelper(root.right, nodesCount);

  const average = calculateAverage(
    totalValue + left.totalValue + right.totalValue,
    nodesCount + left.nodesCount + right.nodesCount
  );

  return (
    (average === root.val ? 1 : 0) +
    left.equalToAverageCount +
    right.equalToAverageCount
  );
}
