function calculate(num1, num2) {
  return (num1 + num2) % 10;
}

export function triangularSum(nums) {
  let numsCopy = [...nums];
  let newNums = [];
  let N = nums.length;

  for (let i = 0; i < N - 1; i++) {
    newNums = [];

    for (let index = 0; index < numsCopy.length - 1; index++) {
      newNums.push(calculate(numsCopy[index], numsCopy[index + 1]));
    }

    numsCopy = newNums;
  }

  return numsCopy;
}
