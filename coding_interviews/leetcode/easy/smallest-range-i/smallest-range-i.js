// https://leetcode.com/problems/smallest-range-i

function smallestRangeI(nums, k) {
  let smaller = Infinity;
  let bigger = -Infinity;

  for (let num of nums) {
    smaller = Math.min(smaller, num);
    bigger = Math.max(bigger, num);
  }

  let middle = Math.floor((bigger + smaller) / 2);
  let min = Infinity;
  let max = -Infinity;

  if (k > bigger - middle) {
    max = middle;
  } else {
    max = bigger - k;
  }

  if (k > middle - smaller) {
    min = middle;
  } else {
    min = smaller + k;
  }

  return max - min;
}
