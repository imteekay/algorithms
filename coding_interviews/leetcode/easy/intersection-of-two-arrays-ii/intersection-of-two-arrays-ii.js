/*
nums1 = [1,2,2,1], nums2 = [2,2] => [2] => []
result = [2,2]
Runtime: O(N^3)
Space: O(N)

nums1 = [1,2,2,1], nums2 = [2,2]
hashmap = { 1: 2, 2: 2 }; => { 1: 2, 2: 1 }; => { 1: 2, 2: 0 };
result = [2, 2]
Runtime: O(N) + O(N) => O(N)
Space: O(N) + O(N) => O(N)
*/

function intersect(nums1, nums2) {
  let numsCount = {};

  for (let num of nums1) {
    if (numsCount[num]) {
      numsCount[num]++;
    } else {
      numsCount[num] = 1;
    }
  }

  let result = [];

  for (let num of nums2) {
    if (numsCount[num]) {
      numsCount[num]--;
      result.push(num);
    }
  }

  return result;
}
