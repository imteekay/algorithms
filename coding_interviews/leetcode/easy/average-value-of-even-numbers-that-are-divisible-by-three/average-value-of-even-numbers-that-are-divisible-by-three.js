// https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three

function isEven(num) {
  return num % 2 === 0;
}

function isDividedBy3(num) {
  return num % 3 === 0;
}

function averageValue(nums) {
  let n = 0;
  let sum = 0;

  for (let num of nums) {
    if (isEven(num) && isDividedBy3(num)) {
      n++;
      sum += num;
    }
  }

  return n ? Math.floor(sum / n) : 0;
}
