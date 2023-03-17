function splitNum(num) {
  let numsString = num
    .toString()
    .split('')
    .sort((a, b) => a - b);

  let firstHalf = [];
  let lastHalf = [];
  let isFirstHalf = true;

  for (let charNum of numsString) {
    if (isFirstHalf) firstHalf.push(charNum);
    else lastHalf.push(charNum);
    isFirstHalf = !isFirstHalf;
  }

  return Number(firstHalf.join('')) + Number(lastHalf.join(''));
}
