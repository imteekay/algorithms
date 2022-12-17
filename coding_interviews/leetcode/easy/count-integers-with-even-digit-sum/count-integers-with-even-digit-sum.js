function sumDigits(numString) {
  let sum = 0;

  for (let digit of numString) {
    sum += Number(digit);
  }

  return sum;
}

function isEven(num) {
  return num % 2 === 0;
}

function countEven(num) {
  let counter = 0;

  for (let number = 1; number <= num; number++) {
    let numString = number.toString();
    let digitSum = sumDigits(numString);
    if (isEven(digitSum)) counter++;
  }

  return counter;
}
