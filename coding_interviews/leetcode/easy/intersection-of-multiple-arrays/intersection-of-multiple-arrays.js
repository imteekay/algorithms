function intersection(nums) {
  const numberCounts = new Map();
  const numsLength = nums.length;
  const intersectionNums = [];

  for (let numsList of nums) {
    for (let num of numsList) {
      if (numberCounts.has(num)) {
        numberCounts.set(num, numberCounts.get(num) + 1);
      } else {
        numberCounts.set(num, 1);
      }
    }
  }

  for (let [num, count] of numberCounts.entries()) {
    if (count === numsLength) {
      intersectionNums.push(num);
    }
  }

  return intersectionNums.sort((a, b) => a - b);
}
