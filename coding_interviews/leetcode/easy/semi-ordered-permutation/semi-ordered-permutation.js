// https://leetcode.com/problems/semi-ordered-permutation

function semiOrderedPermutation(nums) {
  let N = nums.length;
  let indexFirst;
  let indexLast;

  for (let index = 0; index < N; index++) {
    if (nums[index] === 1) indexFirst = index;
    if (nums[index] === N) indexLast = index;
  }

  let swaps = indexFirst;

  if (indexFirst > indexLast) swaps += N - indexLast - 2;
  else swaps += N - indexLast - 1;

  return swaps;
}
