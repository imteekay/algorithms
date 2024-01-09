// Runtime: O(N), N = nums length
// Space: O(N)

function zeroSumSubarray(nums) {
  let currentSum = 0;
  let sums = new Set();

  for (let index = 0; index < nums.length; index++) {
    currentSum += nums[index];

    if (currentSum === 0 || sums.has(currentSum)) {
      return true;
    }

    sums.add(currentSum);
  }

  return false;
}
