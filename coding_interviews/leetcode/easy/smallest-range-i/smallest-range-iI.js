// https://leetcode.com/problems/smallest-range-i

function smallestRangeI(nums, k) {
  let min = Math.min(...nums);
  let max = Math.max(...nums);
  return Math.max(0, max - k - (min + k));
}
