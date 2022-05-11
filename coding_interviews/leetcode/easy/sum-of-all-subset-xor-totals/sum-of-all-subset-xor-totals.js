function getAllSubsets(subset, nums, output, index) {
  if (index == nums.length) {
    subset.push(output);
    return;
  }

  getAllSubsets(subset, nums, [...output], index + 1);
  output.push(nums[index]);
  getAllSubsets(subset, nums, [...output], index + 1);
}

function calculateTotalXOR(nums) {
  let totalXOR = nums[0];

  for (let i = 1; i < nums.length; i++) {
    totalXOR = totalXOR ^ nums[i];
  }

  return totalXOR;
}

function subsetXORSum(nums) {
  let total = 0;
  let subset = [];

  getAllSubsets(subset, nums, [], 0);

  for (let list of subset) {
    if (list.length) total += calculateTotalXOR(list);
  }

  return total;
}

console.log(subsetXORSum([1, 2, 3]));
