/**
 * You're given an array of integers and an integer. Write a function that
 * moves all instances of that integer in the array to the end of the
 * array and returns the array.
 * The function should perform this in place (i.e., it should mutate the input array)
 * and doesn't need to maintain the order of the other integers.
 *
 * Input:
 * array = [2, 1, 2, 2, 2, 3, 4, 2]
 * toMove = 2
 *
 * Output:
 * [1, 3, 4, 2, 2, 2, 2, 2]
 */

// Runtime: O(2N) = O(N), where N = array length
// Space: O(1)

function moveElementToEnd(array, toMove) {
  let count = 0;
  let pointer = 0;

  for (let index = 0; index < array.length; index++) {
    if (array[index] === toMove) count++;
    else {
      array[pointer] = array[index];
      pointer++;
    }
  }

  for (let index = pointer; index < array.length; index++) {
    array[index] = toMove;
  }

  return array;
}
