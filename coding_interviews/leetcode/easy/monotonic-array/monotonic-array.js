function isMonotonic(nums) {
  if (nums.length === 1) return true;
  let isIncreasing;
  let previous = nums[0];

  for (let index = 1; index < nums.length; index++) {
    if (nums[index] === previous) {
      previous = nums[index];
      continue;
    }

    if (isIncreasing === undefined) {
      isIncreasing = previous <= nums[index];
    }

    if (isIncreasing && nums[index] < previous) return false;
    if (!isIncreasing && nums[index] > previous) return false;
    previous = nums[index];
  }

  return true;
}
