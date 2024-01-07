/**
 * Write a function that takes in a non-empty array of arbitrary intervals,
 * merges any overlapping intervals, and returns the new intervals in no
 * particular order.
 * Each interval interval is an array of two integers, with interval[0] as
 * the start of the interval and interval[1] as the end of the interval.
 * Note that back-to-back intervals aren't considered to be overlapping.
 * For example, [1, 5] and [6, 7] aren't overlapping; however, [1, 6] and
 * [6, 7] are indeed overlapping.
 * Also note that the start of any particular interval will always be
 * less than or equal to the end of that interval.
 *
 * Input: intervals = [[1, 2], [3, 5], [4, 7], [6, 8], [9, 10]]
 * Output: [[1, 2], [3, 8], [9, 10]]
 */

// Runtime: O(NlogN), N = array length
// Space: O(N)

function mergeOverlappingIntervals(array) {
  if (array.length <= 1) return array;

  array.sort((a, b) => a[0] - b[0]);

  let intervals = [];
  let current = array[0];

  for (let index = 1; index < array.length; index++) {
    let next = array[index];

    if (current[1] >= next[0]) {
      current = [current[0], Math.max(current[1], next[1])];
    } else {
      intervals.push(current);
      current = next;
    }

    if (index === array.length - 1) {
      intervals.push(current);
    }
  }

  return intervals;
}
