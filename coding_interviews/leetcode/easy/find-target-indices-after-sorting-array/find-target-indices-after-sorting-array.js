export function targetIndices(nums, target) {
  const sortedNums = nums.sort((num1, num2) => num1 - num2);
  const result = [];

  sortedNums.forEach((num, index) => {
    if (num === target) {
      result.push(index);
    }
  });

  return result;
}
