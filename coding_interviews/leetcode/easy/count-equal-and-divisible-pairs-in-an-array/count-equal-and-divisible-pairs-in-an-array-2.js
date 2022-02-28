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
  let counter = 0;

  for (let i = 0; i < numbers.length - 1; i++) {
    for (let j = i + 1; j < numbers.length; j++) {
      if (numbers[i] === numbers[j] && (i * j) % k === 0) {
        counter++;
      }
    }
  }

  return counter;
}
