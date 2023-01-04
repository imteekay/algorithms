function maxAscendingSum(nums) {
  let max = 0;
  let maxSubsequence = 0;
  let previous = -Infinity;

  for (let index = 0; index < nums.length; index++) {
    let num = nums[index];

    if (num > previous) {
      maxSubsequence += num;
      previous = num;

      if (index === nums.length - 1) max = Math.max(max, maxSubsequence);
    } else {
      max = Math.max(max, maxSubsequence);
      previous = num;
      maxSubsequence = num;
    }
  }

  return max;
}
