// https://leetcode.com/problems/sort-array-by-parity

function sortArrayByParity(nums) {
  let odd = [];
  let even = [];

  for (let num of nums) {
    if (num % 2 === 0) even.push(num);
    else odd.push(num);
  }

  return [...even, ...odd];
}
