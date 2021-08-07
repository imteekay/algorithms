// https://leetcode.com/problems/maximum-product-difference-between-two-pairs

const maxProductDifference = function (nums) {
  nums.sort((a, b) => a - b);
  const greatest = nums[nums.length - 1];
  const secondGreatest = nums[nums.length - 2];
  const smallest = nums[0];
  const secondSmallest = nums[1];

  return greatest * secondGreatest - smallest * secondSmallest;
};

const max = maxProductDifference([1, 6, 7, 5, 2, 4, 10, 6, 4]);
console.log(max);
