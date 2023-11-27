// Runtime: O(n)
// Space: O(n)

function twoNumberSum(array, targetSum) {
  let hashmap = new Map();

  for (let num of array) {
    let complement = targetSum - num;

    if (hashmap.has(complement)) {
      return [num, complement];
    }

    hashmap.set(num, num);
  }

  return [];
}
