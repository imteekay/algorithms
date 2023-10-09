// https://leetcode.com/problems/k-items-with-the-maximum-sum

function kItemsWithMaximumSum(numOnes, numZeros, numNegOnes, k) {
  if (k <= numOnes) {
    return k;
  }

  let sum = 0;

  if (numOnes) {
    sum += numOnes;
    k -= numOnes;
  }

  if (k > 0 && numZeros) {
    k -= numZeros;
  }

  if (k > 0 && numNegOnes) {
    sum -= k;
  }

  return sum;
}
