function dfs(node, hashmap, values) {
  if (!node) {
    return node;
  }

  hashmap[node.val] = true;
  values.push(node.val);

  dfs(node.left, hashmap, values);
  dfs(node.right, hashmap, values);
}

function findTarget(root, k) {
  let hashmap = {};
  let values = [];

  dfs(root, hashmap, values);

  for (let value of values) {
    if (hashmap[k - value] && k - value !== value) {
      return true;
    }
  }

  return false;
}

// second try with better memory usage

function dfs2(node, target, hashmap) {
  if (!node) {
    return false;
  }

  if (hashmap[target - node.val]) {
    return true;
  }

  hashmap[node.val] = true;

  return dfs2(node.left, target, hashmap) || dfs2(node.right, target, hashmap);
}

function findTarget2(root, k) {
  return dfs2(root, k, {});
}
