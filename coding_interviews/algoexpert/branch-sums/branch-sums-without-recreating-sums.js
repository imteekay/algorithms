// Runtime: O(N), N = number of nodes
// Space: list of branch sums (number of leaf nodes) is O(N) and recursive algorithm (call stack) is log(N)

class BinaryTree {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

function branchSums(root) {
  let sums = [];

  const recursiveBranchSums = (node, sum) => {
    if (!node) return;
    let newSum = sum + node.value;
    if (!node.left && !node.right) return sums.push(newSum);
    recursiveBranchSums(node.left, newSum);
    recursiveBranchSums(node.right, newSum);
  };

  recursiveBranchSums(root, 0);
  return sums;
}
