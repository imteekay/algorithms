const sum = (numbers) => numbers.reduce((num, amount) => num + amount, 0);

const maxSubArray = (nums) => {
  let sumOfAll = sum(nums);
  let maxSum = sumOfAll;
  let auxSum = sumOfAll;
  let start = 0;
  let end = nums.length - 1;

  for (let i = 0; i < nums.length - 1; i++) {
    auxSum -= nums[i];
    maxSum = Math.max(maxSum, auxSum);
  }

  auxSum = sumOfAll;

  for (let i = nums.length - 1; i >= 0; i--) {
    auxSum -= nums[i];
    maxSum = Math.max(maxSum, auxSum);
  }

  return maxSum;
};

/*
[-2, 1, -3, 4, -1, 2, 1, -5, 4]
curr = -2, -1, 4, 6, 7
max = -2, -1, 4, 6

[2, 3, -3, 4, -1, 2, 1, -5, 4]
curr = 2, 5, , 
max = 2, 5
*/

const maxSubArray = (nums) => {
  let maxSum = nums[0];
  let currentSum = nums[0];

  for (let i = 1; i < nums.length; i++) {
    currentSum = Math.max(nums[i], currentSum + nums[i]);
    maxSum = Math.max(maxSum, currentSum);
  }

  return maxSum;
};
