// https://leetcode.com/problems/k-items-with-the-maximum-sum

function kItemsWithMaximumSum(numOnes, numZeros, numNegOnes, k) {
  let max = 0;
  let mutK = k;

  mutK -= numOnes;
  if (mutK <= 0) return k;
  max += numOnes;
  mutK -= numZeros;
  if (mutK <= 0) return max;
  if (mutK - numNegOnes < 0) return max - mutK;
  max -= numNegOnes;
  return max;
}
