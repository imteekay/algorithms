// Runtime: O(N), N = number of numbers in the array
// Space: O(1)

function findThreeLargestNumbers(array) {
  let first = -Infinity;
  let second = -Infinity;
  let third = -Infinity;

  for (let num of array) {
    if (num > first) {
      third = second;
      second = first;
      first = num;
    } else if (num > second) {
      third = second;
      second = num;
    } else if (num > third) {
      third = num;
    }
  }

  return [third, second, first];
}
