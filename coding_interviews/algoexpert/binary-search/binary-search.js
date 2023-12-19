// Runtime: O(logN)
// Space: O(1)

function binarySearch(array, target) {
  let start = 0;
  let end = array.length - 1;
  let middle = Math.floor((start + end) / 2);

  while (start <= end) {
    let num = array[middle];

    if (num === target) {
      return middle;
    }

    if (num > target) {
      end = middle - 1;
    }

    if (num < target) {
      start = middle + 1;
    }

    middle = Math.floor((start + end) / 2);
  }

  return -1;
}
