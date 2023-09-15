// https://leetcode.com/problems/neither-minimum-nor-maximum

function findNonMinOrMax(nums) {
  let min = Infinity,
    max = -Infinity;

  for (num of nums) {
    min = Math.min(min, num);
    max = Math.max(max, num);
  }

  for (let num of nums) {
    if (num !== min && num !== max) {
      return num;
    }
  }

  return -1;
}
