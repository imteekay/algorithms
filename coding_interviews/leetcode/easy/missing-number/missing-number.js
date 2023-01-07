function buildHashmap(nums) {
  const hashmap = new Map();

  for (let num of nums) {
    hashmap.set(num, true);
  }

  return hashmap;
}

function getMissingNumber(numsLength, hashmap) {
  for (let i = 0; i <= numsLength; i++) {
    if (!hashmap.has(i)) return i;
  }
}

function missingNumber(nums) {
  const hashmap = buildHashmap(nums);
  return getMissingNumber(nums.length, hashmap);
}
