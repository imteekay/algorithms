function buildHashmap(nums) {
  let hashmap = new Map();

  for (let num of nums) {
    hashmap.set(num, true);
  }

  return hashmap;
}

function buildDistinct(nums, hashmap) {
  let distinct = [];

  for (let num of nums) {
    if (!hashmap.has(num)) {
      distinct.push(num);
      hashmap.set(num, true);
    }
  }

  return distinct;
}

function findDifference(nums1, nums2) {
  let hashmap1 = buildHashmap(nums1);
  let hashmap2 = buildHashmap(nums2);
  let distinct1 = buildDistinct(nums1, hashmap2);
  let distinct2 = buildDistinct(nums2, hashmap1);

  return [distinct1, distinct2];
}
