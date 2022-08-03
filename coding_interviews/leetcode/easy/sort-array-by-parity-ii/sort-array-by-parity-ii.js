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
