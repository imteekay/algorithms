// https://leetcode.com/problems/largest-number-after-digit-swaps-by-parity

const isEven = (num) => num % 2 === 0;
const isOdd = (num) => !isEven(num);

function largestInteger(num) {
  let numString = num.toString().split('');

  for (let index = 0; index < numString.length - 1; index++) {
    let digit = Number(numString[index]);
    let isDigitEven = isEven(digit);
    let maxDigit = digit;
    let swapIndex1 = index;
    let swapIndex2;

    for (
      let digitIndex = index + 1;
      digitIndex < numString.length;
      digitIndex++
    ) {
      let otherDigit = Number(numString[digitIndex]);
      let isOtherDigitEven = isEven(otherDigit);

      if (isDigitEven && isOtherDigitEven && otherDigit > maxDigit) {
        maxDigit = otherDigit;
        swapIndex2 = digitIndex;
      }

      if (!isDigitEven && !isOtherDigitEven && otherDigit > maxDigit) {
        maxDigit = otherDigit;
        swapIndex2 = digitIndex;
      }
    }

    if (swapIndex2) {
      let aux = numString[swapIndex1];
      numString[swapIndex1] = numString[swapIndex2];
      numString[swapIndex2] = aux;
    }
  }

  return numString.join('');
}
