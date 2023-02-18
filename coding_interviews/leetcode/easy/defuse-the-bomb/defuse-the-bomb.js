function sumNextK(code, from, k) {
  let sum = 0;

  for (let index = from + 1; index <= from + k; index++) {
    sum += code[index];
  }

  return sum;
}

function decryptNext(code, k) {
  let newCode = [...code, ...code];
  let sum = sumNextK(newCode, 0, k);
  let nextSum = [sum];

  for (let index = 1; index < code.length; index++) {
    sum = sum - newCode[index] + newCode[index + k];
    nextSum.push(sum);
  }

  return nextSum;
}

function sumPreviousK(code, from, k) {
  let sum = 0;

  for (let index = from - 1; index >= from - k; index--) {
    sum += code[index];
  }

  return sum;
}

function decryptPrevious(code, k) {
  let newCode = [...code, ...code];
  let sum = sumPreviousK(code, code.length - 1, k);
  let previousSum = [sum];

  for (let index = newCode.length - 2; index >= code.length; index--) {
    sum = sum - newCode[index] + newCode[index - k];
    previousSum.push(sum);
  }

  return previousSum.reverse();
}

function decryptWithZeros(code) {
  return code.map((_) => 0);
}

function decrypt(code, k) {
  if (k > 0) return decryptNext(code, k);
  if (k < 0) return decryptPrevious(code, k * -1);
  return decryptWithZeros(code);
}
