function moveZeroes(nums) {
  let numsWithZerosAtTheEnd = [];
  let zeroCount = 0;

  for (let num of nums) {
    if (num) {
      numsWithZerosAtTheEnd.push(num);
    } else {
      zeroCount++;
    }
  }

  while (zeroCount) {
    numsWithZerosAtTheEnd.push(0);
    zeroCount--;
  }

  return numsWithZerosAtTheEnd;
}
