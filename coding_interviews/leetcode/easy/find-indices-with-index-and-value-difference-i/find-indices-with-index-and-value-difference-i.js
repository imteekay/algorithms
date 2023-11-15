// https://leetcode.com/problems/find-indices-with-index-and-value-difference-i

function findIndices(nums, indexDifference, valueDifference) {
  for (let i = 0; i < nums.length; i++) {
    for (let j = 0; j < nums.length; j++) {
      if (
        Math.abs(i - j) >= indexDifference &&
        Math.abs(nums[i] - nums[j]) >= valueDifference
      ) {
        return [i, j];
      }
    }
  }

  return [-1, -1];
}
