/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */

function getLeafValueSequence(node, leafValueSequence) {
  if (!node) return;
  if (!node.left && !node.right) {
    leafValueSequence.push(node.val);
    return;
  }

  getLeafValueSequence(node.left, leafValueSequence);
  getLeafValueSequence(node.right, leafValueSequence);
}

function hasSimilarLeafSequence(leafValueSequence1, leafValueSequence2) {
  if (leafValueSequence1.length !== leafValueSequence2.length) return false;

  for (let index = 0; index < leafValueSequence1.length; index++) {
    if (leafValueSequence1[index] !== leafValueSequence2[index]) return false;
  }

  return true;
}

function leafSimilar(root1, root2) {
  let leafValueSequence1 = [];
  let leafValueSequence2 = [];

  getLeafValueSequence(root1, leafValueSequence1);
  getLeafValueSequence(root2, leafValueSequence2);

  return hasSimilarLeafSequence(leafValueSequence1, leafValueSequence2);
}
