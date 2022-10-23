function findMaxK(nums) {
  const hashmap = new Map();

  for (let num of nums) {
    if (!hashmap.has(num)) hashmap.set(num, true);
  }

  let output = -1;

  for (let num of nums) {
    if (num > output && hashmap.has(num * -1)) {
      output = num;
    }
  }

  return output;
}
