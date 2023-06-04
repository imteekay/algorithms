function getBiggest(nums) {
  let biggest = -Infinity;

  for (let num of nums) {
    biggest = Math.max(biggest, num);
  }

  return biggest;
}

function maximizeSum(nums, k) {
  let biggest = getBiggest(nums);
  let sum = 0;

  while (k--) {
    sum += biggest;
    biggest++;
  }

  return sum;
}
