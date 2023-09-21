const getBigThree = (numbers) => {
  let largest = -Infinity;
  let secondLargest = -Infinity;
  let thirdLargest = -Infinity;

  numbers.forEach((number) => {
    if (number > largest) {
      thirdLargest = secondLargest;
      secondLargest = largest;
      largest = number;
    } else if (number > secondLargest) {
      thirdLargest = secondLargest;
      secondLargest = number;
    } else if (number > thirdLargest) {
      thirdLargest = number;
    }
  });

  return [thirdLargest, secondLargest, largest];
};

getBigThree([3, -100, 199, 10, 14, 555, 133, 555, 143, 1000]);
