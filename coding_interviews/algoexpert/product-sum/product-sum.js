function productSum(array, product = 1) {
  let sum = 0;

  for (let num of array) {
    if (Array.isArray(num)) {
      sum += productSum(num, product + 1) * product;
    } else {
      sum += num * product;
    }
  }

  return sum;
}
