function buildMap(nums) {
  const hashmap = new Map();

  for (let num of nums) {
    hashmap.set(num, num);
  }

  return hashmap;
}

function arithmeticTriplets(nums, diff) {
  let hashmap = buildMap(nums);
  let counter = 0;

  for (let index = 0; index < nums.length - 2; index++) {
    const number = nums[index] + diff;
    const anotherNumber = number + diff;

    if (hashmap.has(number) && hashmap.has(anotherNumber)) {
      counter++;
    }
  }

  return counter;
}
