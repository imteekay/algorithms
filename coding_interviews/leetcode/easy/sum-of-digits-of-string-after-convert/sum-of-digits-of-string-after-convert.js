function toNum(char) {
  return char.charCodeAt() - 96;
}

function getNumbers(s) {
  let numbers = [];

  for (let char of s) {
    numbers.push(toNum(char));
  }

  return numbers;
}

function sum(charNums) {
  return charNums.reduce(
    (sumOfNums, charNum) => sumOfNums + Number(charNum),
    0
  );
}

function getLucky(s, k) {
  let numbers = getNumbers(s);
  let digits = numbers.join('').split('');

  for (let index = 1; index <= k; index++) {
    digits = sum(digits).toString().split('');
  }

  return Number(digits.join(''));
}
