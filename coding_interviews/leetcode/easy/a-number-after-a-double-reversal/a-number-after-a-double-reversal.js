function reverse(numString) {
  const stringArray = [];

  for (let i = numString.length - 1; i >= 0; i--) {
    stringArray.push(numString[i]);
  }

  return stringArray.join('');
}

function removeLeadingZeros(numString) {
  const numStringWithoutLeadingZeros = [];
  let foundFirstNonLeadingZero = false;

  for (let i = 0; i < numString.length; i++) {
    const digitChar = numString[i];

    if (
      (!foundFirstNonLeadingZero && digitChar !== '0') ||
      foundFirstNonLeadingZero
    ) {
      foundFirstNonLeadingZero = true;
      numStringWithoutLeadingZeros.push(digitChar);
    }
  }

  return numStringWithoutLeadingZeros.join('');
}

export function isSameAfterReversals(num) {
  const numString = num.toString();

  if (numString.length === 1) {
    return true;
  }

  const reversedNumString = removeLeadingZeros(reverse(numString));

  return numString === reverse(reversedNumString);
}
