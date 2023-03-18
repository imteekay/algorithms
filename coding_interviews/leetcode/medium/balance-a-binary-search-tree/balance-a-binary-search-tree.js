/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */

function getAllNodes(root, nodes) {
  nodes.push(root.val);
  if (root.left) getAllNodes(root.left, nodes);
  if (root.right) getAllNodes(root.right, nodes);
}

function sortASC(values) {
  values.sort((a, b) => a - b);
}

function insert(node, value) {
  if (node.left && value <= node.val) insert(node.left, value);
  else if (value <= node.val) node.left = new TreeNode(value);
  else if (node.right && value > node.val) insert(node.right, value);
  else if (value > node.val) node.right = new TreeNode(value);
}

function insertAll(root, values) {
  for (let value of values) {
    insert(root, value);
  }
}

function balanceBST(root) {
  const nodes = [];

  getAllNodes(root, nodes);
  sortASC(nodes);

  const middleIndex = Math.floor(nodes.length / 2);
  const balancedBST = new TreeNode(nodes[middleIndex]);
  const children = [
    ...nodes.slice(0, middleIndex),
    ...nodes.slice(middleIndex + 1),
  ];

  insertAll(balancedBST, children);

  return balancedBST;
}
