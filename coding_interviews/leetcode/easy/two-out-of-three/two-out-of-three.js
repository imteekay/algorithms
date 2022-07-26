function buildHashmap(nums) {
  let hashmap = new Map();

  for (let num of nums) {
    hashmap.set(num, true);
  }

  return hashmap;
}

function checkAndAddNumbers(result, hashmap1, hashmap2, hashmap3) {
  hashmap1.forEach((_, num) => {
    if (hashmap2.has(num) || hashmap3.has(num)) {
      result.add(num);
    }
  });
}

function twoOutOfThree(nums1, nums2, nums3) {
  let hashmap1 = buildHashmap(nums1);
  let hashmap2 = buildHashmap(nums2);
  let hashmap3 = buildHashmap(nums3);
  let result = new Set();

  checkAndAddNumbers(result, hashmap1, hashmap2, hashmap3);
  checkAndAddNumbers(result, hashmap2, hashmap1, hashmap3);
  checkAndAddNumbers(result, hashmap3, hashmap2, hashmap1);

  return [...result];
}
