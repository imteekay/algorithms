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
// Space: O(N)

function firstDuplicateValue(array) {
  let map = new Map();

  for (let num of array) {
    map.set(num, map.get(num) + 1 || 1);

    if (map.get(num) > 1) {
      return num;
    }
  }

  return -1;
}
