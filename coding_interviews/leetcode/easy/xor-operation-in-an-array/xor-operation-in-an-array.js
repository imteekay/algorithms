function xorOperation(n, start) {
  let result = start;
  let number = start;

  for (let num = 1; num < n; num++) {
    number += 2;
    result ^= number;
  }

  return result;
}
