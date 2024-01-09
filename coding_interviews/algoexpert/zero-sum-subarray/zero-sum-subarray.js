// Runtime: O(N^2)
// Space: O(1)

function zeroSumSubarray(nums) {
  for (let i = 0; i < nums.length; i++) {
    let sum = nums[i];

    for (let j = i; j < nums.length; j++) {
      if (i !== j) {
        sum += nums[j];
      }

      if (sum === 0) {
        return true;
      }
    }
  }

  return false;
}
