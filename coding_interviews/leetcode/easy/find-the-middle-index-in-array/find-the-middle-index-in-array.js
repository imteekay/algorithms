function sum(nums) {
  return nums.reduce((sumOfNums, num) => sumOfNums + num, 0);
}

function findMiddleIndex(nums) {
  let sumOfNums = sum(nums) - nums[0];
  let firstHalfSum = 0;
  let index = 0;

  while (index < nums.length - 1 && sumOfNums !== firstHalfSum) {
    sumOfNums -= nums[index + 1];
    firstHalfSum += nums[index];
    index++;
  }

  return sumOfNums === firstHalfSum ? index : -1;
}
