const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
const target = 2;

const binarySearch = (numbers, target) => {
  let start = 0;
  let end = numbers.length - 1;
  let middle = Math.floor(numbers.length / 2);
  let found = false;

  while (start <= end && !found) {
    const middleNumber = numbers[middle];
    middle = Math.floor((start + end) / 2);

    if (middleNumber === target) found = true;
    if (middleNumber > target) end = middle - 1;
    if (middleNumber < target) start = middle + 1;
  }

  return found;
};

binarySearch(numbers, target);
