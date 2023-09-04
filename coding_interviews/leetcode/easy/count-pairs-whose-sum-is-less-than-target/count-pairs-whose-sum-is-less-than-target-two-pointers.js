// https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target

function countPairs(nums, target) {
  nums.sort((num1, num2) => num1 - num2);
  let counter = 0;
  let start = 0;
  let end = nums.length - 1;

  while (start < end) {
    if (nums[start] + nums[end] < target) {
      counter += end - start;
      start++;
    } else {
      end--;
    }
  }

  return counter;
}
