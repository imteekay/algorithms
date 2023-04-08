function findMaxConsecutiveOnes(nums) {
  let max = 0;
  let consecutive = 0;

  for (let index = 0; index < nums.length; index++) {
    if (nums[index] === 1) consecutive++;
    if (nums[index] === 0 || index === nums.length - 1) {
      max = Math.max(max, consecutive);
      consecutive = 0;
    }
  }

  return max;
}
