/*
Given an integer array nums and an integer k, return the number of pairs (i, j) where i < j such that |nums[i] - nums[j]| == k.

The value of |x| is defined as:

x if x >= 0.
-x if x < 0.
 
Example 1:
Input: nums = [1,2,2,1], k = 1
Output: 4
Explanation: The pairs with an absolute difference of 1 are:
- [1,2,2,1]
- [1,2,2,1]
- [1,2,2,1]
- [1,2,2,1]

Example 2:
Input: nums = [1,3], k = 3
Output: 0
Explanation: There are no pairs with an absolute difference of 3.

Example 3:
Input: nums = [3,2,1,5,4], k = 2
Output: 3
Explanation: The pairs with an absolute difference of 2 are:
- [3,2,1,5,4]
- [3,2,1,5,4]
- [3,2,1,5,4]
*/

function countKDifference(nums, k) {
  const numsMap = {};

  nums.forEach((num) => {
    if (num in numsMap) numsMap[num] += 1;
    else numsMap[num] = 1;
  });

  let count = 0;

  nums.forEach((num) => {
    const rest = num + k;

    if (rest in numsMap) {
      count += numsMap[rest];
    }
  });

  return count;
}

console.log(countKDifference([1, 2, 2, 1], 1), 4);
console.log(countKDifference([1, 3], 3), 0);
console.log(countKDifference([3, 2, 1, 5, 4], 2), 3);
console.log(countKDifference([7, 10, 10, 6, 10, 1, 9, 10, 4, 9], 7), 0);
console.log(countKDifference([2, 3, 2, 10, 3, 9, 4, 9, 5, 8], 1), 11);
