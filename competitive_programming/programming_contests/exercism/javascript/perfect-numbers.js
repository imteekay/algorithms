const getAllDivisibleNumbers = (number) => {
  const divisibleNumbers = [];

  for (let i = 1; i <= number / 2; i++) {
    if (number % i === 0) {
      divisibleNumbers.push(i);
    }
  }

  return divisibleNumbers;
};

const sumAllNumbers = (numbers) =>
  numbers.reduce((sum, number) => sum + number, 0);

export const classify = (number) => {
  if (number <= 0) {
    throw new Error('Classification is only possible for natural numbers.');
  }

  const divisibleNumbers = getAllDivisibleNumbers(number);
  const sumOfNumbers = sumAllNumbers(divisibleNumbers);
  console.log('divisibleNumbers', divisibleNumbers);
  console.log('sumOfNumbers', sumOfNumbers);

  if (sumOfNumbers === number) {
    return 'perfect';
  }

  if (sumOfNumbers > number) {
    return 'abundant';
  }

  if (sumOfNumbers < number) {
    return 'deficient';
  }
};
