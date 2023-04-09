function toBinary(n) {
  let binary = [];

  while (n) {
    binary.push((n % 2).toString());
    n = Math.floor(n / 2);
  }

  return binary.join('');
}

function isAlternating(binary) {
  let previous = binary[0];

  for (let index = 1; index < binary.length; index++) {
    let current = binary[index];
    if (previous === current) return false;
    previous = current;
  }

  return true;
}

function hasAlternatingBits(n) {
  return isAlternating(toBinary(n));
}
