// https://leetcode.com/problems/count-symmetric-integers

function isSymmetricIntegers(num) {
  let numString = num.toString();

  if (numString.length % 2 !== 0) return false;

  let firstHalfSum = 0;
  let lastHalfSum = 0;

  for (let index = 0; index < numString.length; index++) {
    let digit = numString[index];
    if (index < numString.length / 2) firstHalfSum += Number(digit);
    else lastHalfSum += Number(digit);
  }

  return firstHalfSum === lastHalfSum;
}

function countSymmetricIntegers(low, high) {
  let count = 0;

  for (let num = low; num <= high; num++) {
    if (isSymmetricIntegers(num)) {
      count++;
    }
  }

  return count;
}
