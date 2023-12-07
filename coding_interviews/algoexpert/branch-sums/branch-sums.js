class BinaryTree {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

function branchSums(root, sum = 0, sums = []) {
  if (!root) return sums;
  if (!root.left && !root.right) return [...sums, sum + root.value];

  let newSum = sum + root.value;
  let leftBranch = branchSums(root.left, newSum, sums);
  let rightBranch = branchSums(root.right, newSum, sums);

  return [...leftBranch, ...rightBranch];
}
