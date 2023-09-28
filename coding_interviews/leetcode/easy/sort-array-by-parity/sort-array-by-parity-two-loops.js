// https://leetcode.com/problems/sort-array-by-parity

function sortArrayByParity(nums) {
  let output = [];

  for (let num of nums) {
    if (num % 2 === 0) output.push(num);
  }

  for (let num of nums) {
    if (num % 2 !== 0) output.push(num);
  }

  return output;
}
