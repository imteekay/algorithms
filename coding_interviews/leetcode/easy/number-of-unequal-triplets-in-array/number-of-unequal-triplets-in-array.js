function unequalTriplets(nums) {
  let counter = 0;

  for (let i = 0; i < nums.length - 2; i++) {
    for (let j = i + 1; j < nums.length - 1; j++) {
      for (let k = j + 1; k < nums.length; k++) {
        let iNum = nums[i];
        let jNum = nums[j];
        let kNum = nums[k];

        if (iNum !== jNum && iNum !== kNum && jNum !== kNum) counter++;
      }
    }
  }

  return counter;
}
