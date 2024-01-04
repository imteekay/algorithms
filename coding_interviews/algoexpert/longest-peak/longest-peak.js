// Runtime: O(N)
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
