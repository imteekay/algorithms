function sortedArrayToBST(nums) {
  if (nums.length === 0) return null;

  const middle = Math.floor(nums.length / 2);
  const num = nums[middle];
  const node = new TreeNode(num);

  node.left = sortedArrayToBST(nums.slice(0, middle));
  node.right = sortedArrayToBST(nums.slice(middle + 1, nums.length));

  return node;
}
