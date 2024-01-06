/**
 * Given an array of integers between 1 and n, inclusive, where n is the length of
 * the array, write a function that returns the first integer that appears more
 * than once (when the array is read from left to right).
 * In other words, out of all the integers that might occur more than once in the
 * input array, your function should return the one whose first duplicate
 * value has the minimum index.
 * If no integer appears more than once, your function should return -1.
 * Note that you're allowed to mutate the input array.
 *
 * Input: array = [2, 1, 5, 2, 3, 3, 4]
 * Output: 2
 */

// Runtime: O(N), N = array length
// Space: O(1)

function firstDuplicateValue(array) {
  for (let index = 0; index < array.length; index++) {
    let newIndex = Math.abs(array[index]) - 1;

    if (array[newIndex] < 0) {
      return Math.abs(array[index]);
    }

    array[newIndex] = array[newIndex] * -1;
  }

  return -1;
}
