function twoNumberSum(array, targetSum) {
  let hashmap = new Map();

  for (let num of array) {
    hashmap.set(num, num);
  }

  for (let num of array) {
    let match = targetSum - num;
    if (match !== num && hashmap.has(match)) {
      return [num, match];
    }
  }

  return [];
}
