function sum(nums) {
  let sumOfNums = 0;

  for (let num of nums) {
    sumOfNums += num;
  }

  return sumOfNums;
}

function leftRigthDifference(nums) {
  let rightSum = sum(nums);
  let leftSum = 0;
  let previous = 0;
  let answer = [];

  for (let num of nums) {
    leftSum += previous;
    rightSum -= num;
    previous = num;
    answer.push(Math.abs(leftSum - rightSum));
  }

  return answer;
}
