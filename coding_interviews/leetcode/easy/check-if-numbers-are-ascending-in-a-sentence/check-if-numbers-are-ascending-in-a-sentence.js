function getNumbers(string) {
  const tokens = string.split(' ');
  const numbersStrings = tokens.filter((token) => !Number.isNaN(Number(token)));
  return numbersStrings.map((numberString) => Number(numberString));
}

function isIncreasing(numbers) {
  for (let index = 0; index < numbers.length - 1; index++) {
    if (numbers[index + 1] <= numbers[index]) return false;
  }

  return true;
}

function areNumbersAscending(string) {
  const numbers = getNumbers(string);
  return isIncreasing(numbers);
}
