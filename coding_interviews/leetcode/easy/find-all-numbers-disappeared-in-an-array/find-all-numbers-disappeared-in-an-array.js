function buildMap(nums) {
  let hashmap = new Map();

  for (let num of nums) {
    hashmap.set(num, true);
  }

  return hashmap;
}

function findDisappearedNumbers(nums) {
  let hashmap = buildMap(nums);
  let output = [];

  for (let num = 1; num <= nums.length; num++) {
    if (!hashmap.has(num)) output.push(num);
  }

  return output;
}
