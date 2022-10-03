function sum(nums) {
  return nums.reduce((sumOfNums, num) => sumOfNums + num, 0);
}

function minSubsequence(nums) {
  const result = [];
  const sortedNums = [...nums].sort((a, b) => a - b);
  let index = nums.length - 1;
  let sumOfNums = sum(sortedNums);
  let otherHalfSum = 0;

  while (index >= 0 && otherHalfSum <= sumOfNums) {
    const num = sortedNums[index];
    result.push(num);
    sumOfNums -= num;
    otherHalfSum += num;
    index--;
  }

  return result;
}
