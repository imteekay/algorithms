// https://leetcode.com/problems/plus-one/

function add_one(digits) {
  return plus_one(digits, 1);
}

function plus_one(digits, inc) {
  if (digits.length == 0 && inc > 0) {
    return [1];
  }

  if (digits.length == 0 && inc == 0) {
    return [];
  }

  let new_inc;
  let last_digit;

  last_digit = digits[digits.length - 1];
  last_digit = last_digit + inc;

  if (last_digit == 10) {
    new_inc = 1;
  } else {
    new_inc = 0;
  }

  return plus_one(
    digits.slice(0, digits.length - 1),
    new_inc
  ).concat([last_digit % 10]);
}

console.log(add_one([1, 2, 3])) // [1, 2, 4]
console.log(add_one([4, 3, 2, 1])) // [4, 3, 2, 2]
console.log(add_one([1, 2, 9])) // [1, 3, 0]
console.log(add_one([1, 9, 9])) // [2, 0, 0]
console.log(add_one([9, 9, 9])) // [1, 0, 0, 0]
console.log(add_one([1, 0, 0, 0, 0])) // [1, 0, 0, 0, 1]
