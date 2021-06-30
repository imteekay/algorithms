const getLargestAndIndex = (numbers) => {
  let largest = -Infinity;
  let index;

  numbers.forEach((number, numberIndex) => {
    if (number > largest) {
      largest = number;
      index = numberIndex;
    }
  });

  return [largest, index];
};

const removeItemByIndex = (numbers, index) => {
  return numbers.filter((_, numberIndex) => numberIndex !== index);
};

const getBigThree = (numbers) => {
  let largest;
  let secondLargest;
  let thirdLargest;
  let index;
  let numbersCopy;

  [largest, index] = getLargestAndIndex(numbers);

  numbersCopy = removeItemByIndex(numbers, index);
  [secondLargest, index] = getLargestAndIndex(numbersCopy);

  numbersCopy = removeItemByIndex(numbersCopy, index);
  [thirdLargest] = getLargestAndIndex(numbersCopy);

  return [thirdLargest, secondLargest, largest];
};
