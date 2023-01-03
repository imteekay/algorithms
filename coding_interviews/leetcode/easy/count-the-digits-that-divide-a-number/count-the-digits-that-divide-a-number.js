function countDigits(num) {
  let digitsCount = 0;
  let numString = num.toString();

  for (let numChar of numString) {
    if (num % Number(numChar) === 0) digitsCount++;
  }

  return digitsCount;
}
