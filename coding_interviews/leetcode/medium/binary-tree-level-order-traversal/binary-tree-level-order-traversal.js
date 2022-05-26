function levelOrder(root) {
  if (!root) {
    return [];
  }

  let queue = [root];
  let levelOrderTree = [];

  while (queue.length) {
    let levelNodes = [];
    let levels = queue.length;

    for (let level = 0; level < levels; level++) {
      let node = queue.shift();

      if (node.left) {
        queue.push(node.left);
      }

      if (node.right) {
        queue.push(node.right);
      }

      levelNodes.push(node.val);
    }

    levelOrderTree.push(levelNodes);
  }

  return levelOrderTree;
}
