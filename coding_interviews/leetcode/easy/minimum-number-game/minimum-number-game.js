// https://leetcode.com/problems/minimum-number-game

function numberGame(nums) {
  let arr = [];

  nums.sort((a, b) => a - b);

  for (let index = 0; index < nums.length; index += 2) {
    let alice = nums[index];
    let bob = nums[index + 1];
    arr.push(bob);
    arr.push(alice);
  }

  return arr;
}
