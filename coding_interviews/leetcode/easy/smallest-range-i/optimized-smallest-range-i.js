// https://leetcode.com/problems/smallest-range-i

function minMax(nums) {
  let min = Infinity;
  let max = -Infinity;

  for (let num of nums) {
    min = Math.min(min, num);
    max = Math.max(max, num);
  }

  return [min, max];
}

function smallestRangeI(nums, k) {
  let [min, max] = minMax(nums);
  return Math.max(0, max - k - (min + k));
}
