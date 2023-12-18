// Runtime: O(N), N = all numbers including the numbers inside nested arrays
// Space: O(D), D = the depth of the nested arrays

function productSum(array, depth = 1) {
  let sum = 0;

  for (let num of array) {
    if (Array.isArray(num)) {
      sum += productSum(num, depth + 1);
    } else {
      sum += num;
    }
  }

  return sum * depth;
}
