/**
 *
 * Write a function that takes in two non-empty arrays of integers,
 * finds the pair of numbers (one from each array) whose absolute
 * difference is closest to zero, and returns an array containing
 * these two numbers, with the number from the first array in the first position.
 * Note that the absolute difference of two integers is the distance
 * between them on the real number line. For example, the absolute
 * difference of -5 and 5 is 10, and the absolute difference of -5 and -4 is 1.
 * You can assume that there will only be one pair of numbers with the smallest difference.
 *
 * Input:
 * arrayOne = [-1, 5, 10, 20, 28, 3]
 * arrayTwo = [26, 134, 135, 15, 17]
 *
 * Output:
 * [28, 26]
 */

// Runtime: O(NlogN + MlogM), where N = length of arrayOne and M = length of arrayTwo
// Space: O(1)

function smallestDifference(arrayOne, arrayTwo) {
  let output = [];
  let indexOne = 0;
  let indexTwo = 0;
  let smallestDistance = Infinity;

  arrayOne.sort((a, b) => a - b);
  arrayTwo.sort((a, b) => a - b);

  while (indexOne < arrayOne.length && indexTwo < arrayTwo.length) {
    let one = arrayOne[indexOne];
    let two = arrayTwo[indexTwo];
    let distance = Math.abs(one - two);

    if (distance < smallestDistance) {
      smallestDistance = distance;
      output = [one, two];
    }

    if (one < two) indexOne++;
    else indexTwo++;
  }

  return output;
}
