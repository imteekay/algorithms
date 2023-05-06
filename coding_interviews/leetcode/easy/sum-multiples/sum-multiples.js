function sumOfMultiples(n) {
  let sum = 0;

  for (let num = 1; num <= n; num++) {
    if (num % 7 === 0 || num % 5 === 0 || num % 3 === 0) {
      sum += num;
    }
  }

  return sum;
}
