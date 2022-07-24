function countOnesInBinaryTransformation(number) {
  let counter = 0;

  while (number) {
    let remainder = number % 2;
    if (remainder) counter++;
    number = Math.floor(number / 2);
  }

  return counter;
}

function countBits(n) {
  let answer = [];

  for (let num = 0; num <= n; num++) {
    answer.push(countOnesInBinaryTransformation(num));
  }

  return answer;
}
