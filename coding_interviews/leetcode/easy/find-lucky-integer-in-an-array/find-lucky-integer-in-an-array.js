function buildNumCounter(nums) {
  let counter = new Map();

  for (let num of nums) {
    if (counter.has(num)) counter.set(num, counter.get(num) + 1);
    else counter.set(num, 1);
  }

  return counter;
}

function findLucky(nums) {
  let largestLuckyInteger = -1;
  let counter = buildNumCounter(nums);

  for (let num of nums) {
    if (num === counter.get(num) && num > largestLuckyInteger) {
      largestLuckyInteger = num;
    }
  }

  return largestLuckyInteger;
}
