// https://leetcode.com/problems/find-the-distinct-difference-array

function countDistinct(nums, startIndex, endIndex) {
  let count = 0;
  let distinct = new Map();

  for (let i = startIndex; i <= endIndex; i++) {
    if (!distinct.has(nums[i])) {
      distinct.set(nums[i], nums[i]);
      count++;
    }
  }

  return count;
}

function countDistinctPrefix(nums, index) {
  return countDistinct(nums, 0, index);
}

function countDistinctSufix(nums, index) {
  return countDistinct(nums, index + 1, nums.length - 1);
}

function distinctDifferenceArray(nums) {
  let diff = [];

  for (let index = 0; index < nums.length; index++) {
    let prefix = countDistinctPrefix(nums, index);
    let sufix = countDistinctSufix(nums, index);
    diff.push(prefix - sufix);
  }

  return diff;
}
