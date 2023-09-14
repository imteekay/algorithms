// https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations

function reverseDigits(num) {
  let digits = 0;

  while (num > 0) {
    digits = digits * 10 + (num % 10);
    num = Math.floor(num / 10);
  }

  return digits;
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
