// https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i

function sumCounts(nums) {
  let sum = 0;

  for (let i = 0; i < nums.length; i++) {
    let set = new Set();

    for (let j = i; j < nums.length; j++) {
      set.add(nums[j]);
      sum += set.size ** 2;
    }
  }

  return sum;
}
