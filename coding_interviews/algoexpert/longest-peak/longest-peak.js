/**
 * Write a function that takes in an array of integers and returns
 * the length of the longest peak in the array.
 * A peak is defined as adjacent integers in the array that are
 * strictly increasing until they reach a tip (the highest value in
 * the peak), at which point they become strictly decreasing.
 * At least three integers are required to form a peak.
 * For example, the integers 1, 4, 10, 2 form a peak, but the
 * integers 4, 0, 10 don't and neither do the integers 1, 2, 2, 0.
 * Similarly, the integers 1, 2, 3 don't form a peak because there
 * aren't any strictly decreasing integers after the 3.
 *
 * Input: array = [1, 2, 3, 3, 4, 0, 10, 6, 5, -1, -3, 2, 3]
 * Output: 6 // 0, 10, 6, 5, -1, -3
 */

// Runtime: O(N), N = array length
// Space: O(1)

function longestPeak(array) {
  let longestPeak = 0;
  let leftEdge;
  let rightEdge;

  for (let peakIndex = 1; peakIndex < array.length - 1; peakIndex++) {
    if (
      array[peakIndex] > array[peakIndex - 1] &&
      array[peakIndex] > array[peakIndex + 1]
    ) {
      for (let index = peakIndex; index > 0; index--) {
        if (array[index - 1] < array[index]) {
          leftEdge = index - 1;
        } else {
          break;
        }
      }

      for (let index = peakIndex; index < array.length - 1; index++) {
        if (array[index] > array[index + 1]) {
          rightEdge = index + 1;
        } else {
          break;
        }
      }

      longestPeak = Math.max(longestPeak, rightEdge - leftEdge + 1);
    }
  }

  return longestPeak;
}
