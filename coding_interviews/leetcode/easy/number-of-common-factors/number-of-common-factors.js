function commonFactors(a, b) {
  let minValue = Math.min(a, b);
  let counter = 0;

  for (let num = 1; num <= minValue; num++) {
    if (a % num === 0 && b % num === 0) counter++;
  }

  return counter;
}
