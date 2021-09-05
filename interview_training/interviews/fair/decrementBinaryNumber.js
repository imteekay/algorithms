function countOnes(number) {
  let counter = 0;

  number.split('').forEach((char) => {
    if (char === '1') counter++;
  });

  return counter;
}

function toBinary(number) {
  return number.toString(2);
}

function toDecimal(number) {
  return parseInt(number, 2);
}

function decrementBinary(number) {
  return toBinary(toDecimal(number) - 1);
}

function decrementBinaryNumber(number, requests) {
  const answer = [];

  requests.forEach((request) => {
    if (request === '?') {
      answer.push(countOnes(number));
    } else {
      number = decrementBinary(number);
    }
  });

  return answer;
}
