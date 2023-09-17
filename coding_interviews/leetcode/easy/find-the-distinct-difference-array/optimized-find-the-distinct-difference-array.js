// https://leetcode.com/problems/find-the-distinct-difference-array

function distinctDifferenceArray(nums) {
  let distinctDiff = [];
  let countInLeft = 0;
  let countInRight = 0;
  let leftCounterMap = new Map();
  let rightCounterMap = new Map();

  for (let num of nums) {
    if (leftCounterMap.has(num)) {
      leftCounterMap.set(num, leftCounterMap.get(num) + 1);
    } else {
      leftCounterMap.set(num, 1);
      countInLeft++;
    }
  }

  distinctDiff.unshift(countInLeft - countInRight);

  for (let index = nums.length - 1; index > 0; index--) {
    let num = nums[index];
    leftCounterMap.set(num, leftCounterMap.get(num) - 1);
    if (leftCounterMap.get(num) === 0) countInLeft--;
    rightCounterMap.set(num, (rightCounterMap.get(num) || 0) + 1);
    if (rightCounterMap.get(num) === 1) countInRight++;
    distinctDiff.unshift(countInLeft - countInRight);
  }

  return distinctDiff;
}
