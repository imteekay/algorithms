function applyOperations(nums) {
  for (let index = 0; index < nums.length - 1; index++) {
    if (nums[index] === nums[index + 1]) {
      nums[index] *= 2;
      nums[index + 1] = 0;
    }
  }

  let zeros = 0;

  for (let num of nums) {
    if (num === 0) zeros++;
  }

  let result = [];

  for (let num of nums) {
    if (num !== 0) {
      result.push(num);
    }
  }

  for (let index = 1; index <= zeros; index++) {
    result.push(0);
  }

  return result;
}
