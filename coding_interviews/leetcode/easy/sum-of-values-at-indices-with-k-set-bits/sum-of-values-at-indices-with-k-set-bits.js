function toBinary(num) {
  if (num === 0) return '0';

  let binary = [];

  while (num > 0) {
    binary.unshift(num % 2);
    num = Math.floor(num / 2);
  }

  return binary.join('');
}

function checkSetBits(binary, k) {
  let countSetBits = 0;

  for (let digit of binary) {
    if (digit === '1') countSetBits++;
  }

  return countSetBits === k;
}

function sumIndicesWithKSetBits(nums, k) {
  let sum = 0;

  for (let index = 0; index < nums.length; index++) {
    let binary = toBinary(index);
    console.log(index, binary);
    let matchesKSetBits = checkSetBits(binary, k);
    if (matchesKSetBits) {
      sum += nums[index];
    }
  }

  return sum;
}
