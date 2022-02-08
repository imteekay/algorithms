/*
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.

Input: num = 0
Output: 0
*/

function isSingleDigit(number) {
  return Math.floor(number / 10) === 0;
}

function addDigits(number) {
  let result = number;
  let sumOfDigits = 0;

  while (!isSingleDigit(result)) {
    while (result) {
      digit = result % 10;
      result = Math.floor(result / 10);
      sumOfDigits += digit;
    }

    result = sumOfDigits;
    sumOfDigits = 0;
  }

  return result;
}

console.log('addDigits', addDigits(38));
console.log('addDigits', addDigits(0));
