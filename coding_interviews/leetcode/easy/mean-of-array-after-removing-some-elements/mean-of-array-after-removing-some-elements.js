function removeFivePercent(numbers) {
  let totalNumbers = numbers.length;
  let fivePercent = numbers.length * 0.05;
  return numbers.slice(fivePercent, totalNumbers - fivePercent);
}

function sum(numbers) {
  return numbers.reduce((sumOfNums, num) => sumOfNums + num, 0);
}

function trimMean(numbers) {
  numbers.sort((a, b) => a - b);
  const withoutFivePercent = removeFivePercent(numbers);
  const sumOfNums = sum(withoutFivePercent);
  return sumOfNums / withoutFivePercent.length;
}
