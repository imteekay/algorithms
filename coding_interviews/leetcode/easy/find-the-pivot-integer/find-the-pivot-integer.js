const NO_PIVOT = -1;

function sum(n) {
  let sumOfNs = 0;

  for (let num = 1; num <= n; num++) {
    sumOfNs += num;
  }

  return sumOfNs;
}

function pivotInteger(n) {
  let sumOfNs = sum(n);
  let leftSum = 0;

  for (let num = 1; num <= n; num++) {
    leftSum += num;
    if (sumOfNs === leftSum) return num;
    sumOfNs -= num;
  }

  return NO_PIVOT;
}
