// Runtime: O(N)
// Space: O(N)

function missingNumbers(nums) {
  let numbers = [];

  for (let index = 0; index < nums.length + 2; index++) {
    numbers.push(index + 1);
  }

  for (let num of nums) {
    numbers[num - 1] = 0;
  }

  let result = [];

  for (let num of numbers) {
    if (num) result.push(num);
  }

  return result;
}
