/*
list = [3, 1, 2, 2, 2, 1, 3]

data structure
{
  3: [0, 6],
  1: [1, 5],
  2: [2, 3, 4]
}

worst case scenario
{
  x: [0, 1, 2, 3, ..., 100]
}
*/

export function countPairs(numbers, k) {
  const numberToIndices = {};

  numbers.forEach((number, index) => {
    if (number in numberToIndices) {
      numberToIndices[number].push(index);
    } else {
      numberToIndices[number] = [index];
    }
  });

  let counter = 0;

  Object.values(numberToIndices).forEach((indices) => {
    for (let i = 0; i < indices.length - 1; i++) {
      for (let j = i + 1; j < indices.length; j++) {
        if ((indices[i] * indices[j]) % k === 0) {
          counter++;
        }
      }
    }
  });

  return counter;
}
