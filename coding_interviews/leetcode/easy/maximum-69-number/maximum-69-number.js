function maximum69Number(num) {
  let nums = String(num).split('');
  let firstSixIndex;

  for (let index = 0; index < nums.length; index++) {
    if (nums[index] === '6' && firstSixIndex === undefined) {
      firstSixIndex = index;
    }
  }

  nums[firstSixIndex] = '9';

  return Number(nums.join(''));
}
