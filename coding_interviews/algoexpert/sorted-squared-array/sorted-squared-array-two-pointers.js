// Runtime: O(n)
// Space: O(n)

function sortedSquaredArray(array) {
  let p1 = 0;
  let p2 = array.length - 1;
  let result = [];

  while (p1 <= p2) {
    let square1 = array[p1] * array[p1];
    let square2 = array[p2] * array[p2];

    if (square1 > square2) {
      result.unshift(square1);
      p1++;
    } else {
      result.unshift(square2);
      p2--;
    }
  }

  return result;
}
