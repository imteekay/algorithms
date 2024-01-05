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

// Runtime: O(N), N = length of array
// Space: O(N)

function initOutput(length) {
  let output = [];

  while (length--) {
    output.push(1);
  }

  return output;
}

function arrayOfProducts(array) {
  let left = 1;
  let right = 1;
  let length = array.length;
  let output = initOutput(length);

  for (let index = 0; index < length; index++) {
    output[index] *= left;
    output[length - index - 1] *= right;
    left *= array[index];
    right *= array[length - index - 1];
  }

  return output;
}
