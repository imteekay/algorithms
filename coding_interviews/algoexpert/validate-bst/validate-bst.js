class BST {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

function validateBst(tree) {
  if (!tree) return true;

  let greaterThanLeftChild = true;
  let smallerThanOrEqualToRightChild = true;

  if (tree.left) greaterThanLeftChild = tree.left.value < tree.value;
  if (tree.right)
    smallerThanOrEqualToRightChild = tree.right.value >= tree.value;

  return (
    greaterThanLeftChild &&
    smallerThanOrEqualToRightChild &&
    validateBst(tree.left) &&
    validateBst(tree.right)
  );
}
