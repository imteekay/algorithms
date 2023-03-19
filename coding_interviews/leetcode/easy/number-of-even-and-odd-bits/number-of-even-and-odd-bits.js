function toBinary(n) {
  const binary = [];

  while (n > 0) {
    binary.push(n % 2);
    n = Math.floor(n / 2);
  }

  return binary;
}

function isEven(n) {
  return n % 2 === 0;
}

function isOdd(n) {
  return n % 2 !== 0;
}

function evenOddBit(n) {
  let binary = toBinary(n);
  let even = 0;
  let odd = 0;

  for (let index = 0; index < binary.length; index++) {
    if (isEven(index) && binary[index]) even++;
    if (isOdd(index) && binary[index]) odd++;
  }

  return [even, odd];
}
