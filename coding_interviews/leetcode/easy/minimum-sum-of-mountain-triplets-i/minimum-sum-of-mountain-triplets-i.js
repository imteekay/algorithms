// https://leetcode.com/problems/minimum-sum-of-mountain-triplets-i

function minimumSum(nums) {
  let min = Infinity;

  for (let i = 0; i < nums.length - 2; i++) {
    for (let j = i + 1; j < nums.length - 1; j++) {
      for (let k = j + 1; k < nums.length; k++) {
        if (nums[i] < nums[j] && nums[k] < nums[j]) {
          min = Math.min(min, nums[i] + nums[j] + nums[k]);
        }
      }
    }
  }

  return min == Infinity ? -1 : min;
}
