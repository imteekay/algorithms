// https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations

function reverseDigits(num) {
  let digits = [];

  while (num > 0) {
    digits.push((num % 10).toString());
    num = Math.floor(num / 10);
  }

  return Number(digits.join(''));
}

function countDistinctIntegers(nums) {
  let set = new Set();
  let N = nums.length;

  for (let index = 0; index < N; index++) {
    let num = nums[index];
    set.add(num);
    let reversedDigitsNum = reverseDigits(num);
    set.add(reversedDigitsNum);
  }

  return set.size;
}
