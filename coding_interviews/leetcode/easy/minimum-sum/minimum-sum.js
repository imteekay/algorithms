/*
You are given a positive integer num consisting of exactly four digits.
Split num into two new integers new1 and new2 by using the digits found in num. Leading zeros are allowed in new1 and new2,
and all the digits found in num must be used.

For example, given num = 2932, you have the following digits:
two 2's, one 9 and one 3. Some of the possible pairs [new1, new2] are [22, 93], [23, 92], [223, 9] and [2, 329].
Return the minimum possible sum of new1 and new2.

# Example 1:
Input: num = 2932
Output: 52
Explanation: Some possible pairs [new1, new2] are [29, 23], [223, 9], etc.
The minimum sum can be obtained by the pair [29, 23]: 29 + 23 = 52.

# Example 2:
Input: num = 4009
Output: 13
Explanation: Some possible pairs [new1, new2] are [0, 49], [490, 0], etc. 
The minimum sum can be obtained by the pair [4, 9]: 4 + 9 = 13.
*/

// 2932 => 2, 9, 3, 2 => 2, 2 => 29, 23

function getAllDigits(number) {
  const stringNumber = number.toString();
  const digits = [];

  for (let i = 0; i < stringNumber.length; i++) {
    digits.push(Number(stringNumber[i]));
  }

  return digits;
}

function sort(digits) {
  return digits.sort((digit1, digit2) => digit1 - digit2);
}

function minimumSum(number) {
  const digits = getAllDigits(number);
  const sortedDigits = sort(digits);
  const [digit1, digit2, digit3, digit4] = sortedDigits;

  return digit1 * 10 + digit3 + (digit2 * 10 + digit4);
}

console.log(minimumSum(2932), 52);
console.log(minimumSum(4009), 13);

function altMinimunSum(number) {
  const digits = number.toString().split('').sort();
  return Number(digits[0] + digits[2]) + Number(digits[1] + digits[3]);
}

console.log(altMinimunSum(2932), 52);
console.log(altMinimunSum(4009), 13);
