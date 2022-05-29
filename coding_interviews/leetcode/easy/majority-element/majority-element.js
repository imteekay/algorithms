function majorityElement(nums) {
  let hashmap = {};
  let result;

  for (let num of nums) {
    if (hashmap[num]) {
      hashmap[num]++;
    } else {
      hashmap[num] = 1;
    }
  }

  Object.entries(hashmap).forEach(([num, count]) => {
    if (count > nums.length / 2) {
      result = num;
    }
  });

  return result;
}
