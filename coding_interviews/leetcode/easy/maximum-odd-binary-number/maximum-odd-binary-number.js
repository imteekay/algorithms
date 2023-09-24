// https://leetcode.com/problems/maximum-odd-binary-number

function countOnesAndZeros(s) {
  let countOnes = 0;
  let countZeros = 0;

  for (let char of s) {
    if (char === '1') {
      countOnes++;
    } else {
      countZeros++;
    }
  }

  return { countOnes, countZeros };
}

function maximumOddBinaryNumber(s) {
  const { countOnes, countZeros } = countOnesAndZeros(s);
  let result = '';

  for (let one = 1; one <= countOnes - 1; one++) {
    result += '1';
  }

  for (let zero = 1; zero <= countZeros; zero++) {
    result += '0';
  }

  return result + '1';
}
