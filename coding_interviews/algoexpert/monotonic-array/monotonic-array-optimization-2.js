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
  let isNonDecreasing = true;
  let isNonIncreasing = true;

  for (let index = 0; index < array.length - 1; index++) {
    if (array[index] > array[index + 1]) isNonDecreasing = false;
    if (array[index] < array[index + 1]) isNonIncreasing = false;
  }

  return isNonDecreasing || isNonIncreasing;
}
