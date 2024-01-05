/**
 *
 * Write a function that takes in a non-empty array of integers and returns
 * an array of the same length, where each element in the output array is
 * equal to the product of every other number in the input array.
 * In other words, the value at output[i] is equal to the product of
 * every number in the input array other than input[i].
 * Note that you're expected to solve this problem without using division.
 *
 * Input: array = [5, 1, 4, 2]
 * Output: [8, 40, 10, 20]
 */

// Runtime: O(N^2), N = length of array
// Space: O(N)

function initOutput(length) {
  let output = [];

  while (length--) {
    output.push(1);
  }

  return output;
}

function arrayOfProducts(array) {
  let output = initOutput(array.length);

  for (let index = 0; index < array.length; index++) {
    for (let outputIndex = 0; outputIndex < output.length; outputIndex++) {
      if (index !== outputIndex) {
        output[outputIndex] *= array[index];
      }
    }
  }

  return output;
}
