function maxSubArray(nums) {
  let maxSum = nums[0];
  let localSum = nums[0];

  for (let index = 1; index < nums.length; index++) {
    localSum = Math.max(nums[index], localSum + nums[index]);
    maxSum = Math.max(maxSum, localSum);
  }

  return maxSum;
}
