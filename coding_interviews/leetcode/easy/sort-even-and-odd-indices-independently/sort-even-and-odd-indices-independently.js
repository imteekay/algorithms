function decreasing(a, b) {
  return b - a;
}

function increasing(a, b) {
  return a - b;
}

function sortEvenOdd(nums) {
  let evens = [];
  let odds = [];

  for (let index = 0; index < nums.length; index++) {
    if (index % 2 === 0) evens.push(nums[index]);
    else odds.push(nums[index]);
  }

  evens.sort(increasing);
  odds.sort(decreasing);

  let result = [];
  let biggerLength = evens.length > odds.length ? evens.length : odds.length;

  for (let index = 0; index < biggerLength; index++) {
    if (index < evens.length) result.push(evens[index]);
    if (index < odds.length) result.push(odds[index]);
  }

  return result;
}
