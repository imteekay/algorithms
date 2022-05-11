function getAllSubsets(subset, nums, output, index) {
  if (index == nums.length) {
    subset.push(output);
    return;
  }

  getAllSubsets(subset, nums, [...output], index + 1);
  output.push(nums[index]);
  getAllSubsets(subset, nums, [...output], index + 1);
}
