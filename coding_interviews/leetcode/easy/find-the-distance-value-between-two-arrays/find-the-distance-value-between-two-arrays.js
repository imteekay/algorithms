// https://leetcode.com/problems/find-the-distance-value-between-two-arrays

function hasSmallerValue(num, arr, d) {
  for (let number of arr) {
    if (Math.abs(num - number) <= d) return true;
  }

  return false;
}

function findTheDistanceValue(arr1, arr2, d) {
  let count = 0;

  for (let num1 of arr1) {
    if (!hasSmallerValue(num1, arr2, d)) count++;
  }

  return count;
}
