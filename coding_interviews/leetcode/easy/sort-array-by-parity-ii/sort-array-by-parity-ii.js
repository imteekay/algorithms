function isEven(num) {
  return num % 2 === 0;
}

function separateIntoEvensAndOdds(nums) {
  let evens = [];
  let odds = [];

  for (let num of nums) {
    if (isEven(num)) evens.push(num);
    else odds.push(num);
  }

  return [evens, odds];
}

export function sortArrayByParityII(nums) {
  let [evens, odds] = separateIntoEvensAndOdds(nums);
  let result = [];

  for (let index = 0; index < evens.length; index++) {
    result.push(evens[index]);
    result.push(odds[index]);
  }

  return result;
}

export function sortArrayByParityIIInPlace(nums) {
  for (let index = 0; index < nums.length - 1; index++) {
    if (isEven(index) !== isEven(nums[index])) {
      for (let index2 = index + 1; index2 < nums.length; index2++) {
        if (isEven(index) === isEven(nums[index2])) {
          let num = nums[index];
          nums[index] = nums[index2];
          nums[index2] = num;
          break;
        }
      }
    }
  }

  return nums;
}
