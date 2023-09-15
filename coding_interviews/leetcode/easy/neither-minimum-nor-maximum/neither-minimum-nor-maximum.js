// https://leetcode.com/problems/neither-minimum-nor-maximum

function findNonMinOrMax(nums) {
  return nums.length > 2 ? nums.sort((a, b) => a - b)[1] : -1;
}
