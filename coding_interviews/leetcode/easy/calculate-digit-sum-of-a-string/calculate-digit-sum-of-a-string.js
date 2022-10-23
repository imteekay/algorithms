function buildSubsets(s, k) {
  const subsets = [];

  for (let index = 0; index < s.length; index += k) {
    subsets.push(s.substring(index, index + k));
  }

  return subsets;
}

function sumDigits(digits) {
  let sumOfDigits = 0;

  for (let digit of digits) {
    sumOfDigits += Number(digit);
  }

  return sumOfDigits;
}

function sumDigitsOfSubsets(subsets) {
  return subsets.map(sumDigits);
}

function digitSum(s, k) {
  if (s.length <= k) return s;

  const subsets = buildSubsets(s, k);
  const sumOfDigitsOfSubsets = sumDigitsOfSubsets(subsets);
  const newString = sumOfDigitsOfSubsets.join('');

  return digitSum(newString, k);
}
