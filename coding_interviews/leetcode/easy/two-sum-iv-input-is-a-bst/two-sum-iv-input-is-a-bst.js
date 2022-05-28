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
