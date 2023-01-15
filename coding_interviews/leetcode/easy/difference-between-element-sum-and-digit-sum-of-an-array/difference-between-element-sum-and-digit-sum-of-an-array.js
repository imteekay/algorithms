function getDigitsSum(num) {
  let digits = 0;
  let numString = num.toString();

  for (let numChar of numString) {
    digits += Number(numChar);
  }

  return digits;
}

function differenceOfSum(nums) {
  let elementSum = 0;
  let digitSum = 0;

  for (let num of nums) {
    elementSum += num;
    digitSum += getDigitsSum(num);
  }

  return Math.abs(elementSum - digitSum);
}
