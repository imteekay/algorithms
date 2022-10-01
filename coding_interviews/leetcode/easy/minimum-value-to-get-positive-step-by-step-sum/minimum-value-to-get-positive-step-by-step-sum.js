function getMinValue(nums) {
  let min = Infinity;
  let sum = 0;

  for (let num of nums) {
    sum += num;
    min = Math.min(min, sum);
  }

  return min;
}

function minStartValue(nums) {
  const minValue = getMinValue(nums);
  const result = 1 - minValue;
  return result >= 1 ? result : 1;
}
