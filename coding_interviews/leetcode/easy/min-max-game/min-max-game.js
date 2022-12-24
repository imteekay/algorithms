function minMaxGame(nums) {
  while (nums.length > 1) {
    let newNums = [];
    let middleIndex = nums.length / 2;

    for (let i = 0; i < middleIndex; i++) {
      if (i % 2 === 0) newNums.push(Math.min(nums[2 * i], nums[2 * i + 1]));
      else newNums.push(Math.max(nums[2 * i], nums[2 * i + 1]));
    }

    nums = newNums;
  }

  return nums;
}
