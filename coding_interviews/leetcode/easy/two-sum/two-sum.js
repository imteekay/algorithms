function twoSum(nums, target) {
  let numbersMap = {};

  for (let [index, num] of nums.entries()) {
    numbersMap[num] = index;
  }

  for (let [index, num] of nums.entries()) {
    let remainder = target - num;
    let remainderIndex = numbersMap[remainder];

    if (remainderIndex && index !== remainderIndex) {
      return [index, remainderIndex];
    }
  }
}
