function toList(node, treeList) {
  if (!node) {
    return;
  }

  treeList.push(node.val);

  toList(node.left, treeList);
  toList(node.right, treeList);
}

function dfs(node, value) {
  if (!node) {
    return new TreeNode(value);
  }

  if (value < node.val) {
    node.left = dfs(node.left, value);
  } else if (value > node.val) {
    node.right = dfs(node.right, value);
  }

  return node;
}

function buildTree(treeList) {
  let root = new TreeNode(treeList[0]);

  for (let value of treeList.slice(1)) {
    dfs(root, value);
  }

  return root;
}

function compareTrees(node1, node2) {
  if (!node1 && !node2) {
    return true;
  }

  if ((node1 && !node2) || (!node1 && node2)) {
    return false;
  }

  return (
    node1.val === node2.val &&
    compareTrees(node1.left, node2.left) &&
    compareTrees(node1.right, node2.right)
  );
}

function isValidBST(root) {
  let treeList = [];
  toList(root, treeList);
  let newTree = buildTree(treeList);
  return compareTrees(root, newTree);
}
