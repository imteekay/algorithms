function isValidLeft(node, left) {
  return node.val > left.val;
}

function isValidRight(node, right) {
  return node.val < right.val;
}

function isValid(node, left, right) {
  return isValidLeft(node, left) && isValidRight(node, right);
}

function compareNodeAndChildren(node, left, right) {
  if (left && right) {
    return (
      isValid(node, left, right) &&
      compareNodeAndChildren(left, left.left, left.right) &&
      compareNodeAndChildren(right, right.left, right.right)
    );
  }

  if (left) {
    return (
      isValidLeft(node, left) &&
      compareNodeAndChildren(left, left.left, left.right)
    );
  }

  if (right) {
    return (
      isValidRight(node, right) &&
      compareNodeAndChildren(right, right.left, right.right)
    );
  }

  return true;
}

function isValidBST(root) {
  return compareNodeAndChildren(root, root.left, root.right);
}
