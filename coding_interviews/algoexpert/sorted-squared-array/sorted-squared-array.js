// Runtime: O(nlogn)
// Space: O(1)

function sortedSquaredArray(array) {
  return array.map((num) => num * num).sort((a, b) => a - b);
}
