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
