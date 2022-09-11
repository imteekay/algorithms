function averageOfLevels(root) {
  const queue = [];
  const averageOfLevels = [];

  queue.push(root);

  while (queue.length) {
    let sumOfLevelNodes = 0;
    let levelNumberOfNodes = queue.length;

    for (let node of queue) {
      sumOfLevelNodes += node.val;
    }

    averageOfLevels.push(sumOfLevelNodes / queue.length);

    for (let index = 0; index < levelNumberOfNodes; index++) {
      const node = queue.shift();
      node.left && queue.push(node.left);
      node.right && queue.push(node.right);
    }
  }

  return averageOfLevels;
}
