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
