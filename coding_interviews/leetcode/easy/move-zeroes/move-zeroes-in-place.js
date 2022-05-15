function moveZeroes(nums) {
  let zeroesCount = 0;
  let inPlaceIndex = 0;

  for (let num of nums) {
    if (num) {
      nums[inPlaceIndex] = num;
      inPlaceIndex++;
    } else {
      zeroesCount++;
    }
  }

  while (zeroesCount) {
    nums[nums.length - zeroesCount] = 0;
    zeroesCount--;
  }
}
