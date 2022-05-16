function twoSum(numbers, target) {
  let numberMap = {};

  for (let index = 0; index < numbers.length; index++) {
    let number = numbers[index];
    numberMap[number] = index + 1;
  }

  let index1;
  let index2;

  for (let index = 0; index < numbers.length; index++) {
    let remainder = target - numbers[index];
    let remaindersIndex = numberMap[remainder];

    if (remaindersIndex) {
      index1 = index + 1;
      index2 = remaindersIndex;
      return [index1, index2];
    }
  }
}
