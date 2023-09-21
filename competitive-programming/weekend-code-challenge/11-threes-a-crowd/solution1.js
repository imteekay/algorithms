const buildArrayOfTwoValuesArrays = (numbers) => {
  numbers.sort((a, b) => a - b);
  const array = [];

  for (let i = 0; i < numbers.length; i++) {
    if (i + 3 === numbers.length - i) {
      array.push([numbers[i + 2], numbers[i + 1], numbers[i]]);
      break;
    }

    if (i + 2 === numbers.length - i) {
      array.push([numbers[i + 1], numbers[i]]);
      break;
    }

    array.push([numbers[numbers.length - 1 - i], numbers[i]]);
  }

  return array;
};

buildArrayOfTwoValuesArrays([3, 7, 10, 5, 4, 4, 1]);
buildArrayOfTwoValuesArrays([3, 7, 10, 5, 4, 4]);
