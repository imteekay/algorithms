function numberOfPairs(nums) {
  let countNums = new Map();

  for (let num of nums) {
    if (countNums.has(num)) {
      countNums.set(num, countNums.get(num) + 1);
    } else {
      countNums.set(num, 1);
    }
  }

  let pairs = 0;
  let rest = 0;

  countNums.forEach((num) => {
    pairs += Math.floor(num / 2);
    rest += Math.floor(num % 2);
  });

  return [pairs, rest];
}
