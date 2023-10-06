// https://leetcode.com/problems/count-largest-group

function sumDigits(num) {
  let numString = num.toString();
  let sum = 0;

  for (let digit of numString) {
    sum += Number(digit);
  }

  return sum;
}

function countLargestGroup(n) {
  let hashmap = new Map();

  for (let num = 1; num <= n; num++) {
    let sum = sumDigits(num);
    if (hashmap.has(sum)) hashmap.set(sum, [...hashmap.get(sum), num]);
    else hashmap.set(sum, [num]);
  }

  let largest = -Infinity;

  for (let [_, values] of hashmap.entries()) {
    largest = Math.max(largest, values.length);
  }

  let size = 0;

  for (let [_, values] of hashmap.entries()) {
    if (values.length === largest) size++;
  }

  return size;
}
