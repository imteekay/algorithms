/**
 * Write a function that takes in an array of integers and returns a boolean
 * representing whether the array is monotonic.
 * An array is said to be monotonic if its elements, from left to right, are
 * entirely non-increasing or entirely non-decreasing.
 * Non-increasing elements aren't necessarily exclusively decreasing; they
 * simply don't increase. Similarly, non-decreasing elements aren't necessarily
 * exclusively increasing; they simply don't decrease.
 * Note that empty arrays and arrays of one element are monotonic.
 *
 * Input:
 * array = [-1, -5, -10, -1100, -1100, -1101, -1102, -9001]
 *
 * Output:
 * true
 */

// Runtime: O(N), N = array length
// Space: O(1)

function isMonotonic(array) {
  let num = array[0];
  let upward;

  for (let index = 1; index < array.length; index++) {
    if (upward === undefined) {
      upward = array[index] !== num ? array[index] > num : undefined;
    }

    if (upward !== undefined && upward && array[index] < num) {
      return false;
    }

    if (upward !== undefined && !upward && array[index] > num) {
      return false;
    }

    num = array[index];
  }

  return true;
}
