function singleNumber(nums) {
  let hashmap = {};

  for (let num of nums) {
    if (hashmap[num]) {
      hashmap[num]++;
    } else {
      hashmap[num] = 1;
    }
  }

  for (let num of nums) {
    if (hashmap[num] === 1) {
      return num;
    }
  }
}
