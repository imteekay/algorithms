function fromDecimalToK(n, k) {
  const baseKN = [];

  while (n) {
    baseKN.push(n % k);
    n = Math.floor(n / k);
  }

  return baseKN;
}

function sumBase(n, k) {
  return fromDecimalToK(n, k).reduce((num, sum) => sum + num, 0);
}
