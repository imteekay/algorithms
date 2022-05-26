function hammingWeight(n) {
  let sum = 0;

  while (n != 0) {
    sum += n & 1;
    n = n >>> 1;
  }

  return sum;
}
