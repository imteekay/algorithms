// https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation

function toBinary(n) {
  let binary = [];

  while (n) {
    binary.push((n % 2).toString());
    n = Math.floor(n / 2);
  }

  return binary.join('');
}

function getNumberOfSetBits(binary) {
  let count = 0;

  for (let digit of binary) {
    if (digit === '1') count++;
  }

  return count;
}

function isPrime(num) {
  for (let i = 2, s = Math.sqrt(num); i <= s; i++) {
    if (num % i === 0) return false;
  }
  return num > 1;
}

function countPrimeSetBits(left, right) {
  let count = 0;

  for (let num = left; num <= right; num++) {
    let binary = toBinary(num);
    let setBits = getNumberOfSetBits(binary);

    if (isPrime(setBits)) {
      count++;
    }
  }

  return count;
}
