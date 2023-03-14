function mergeArrays(nums1, nums2) {
  let nums = [];
  let index1 = 0;
  let index2 = 0;

  while (index1 < nums1.length && index2 < nums2.length) {
    let [id1, val1] = nums1[index1];
    let [id2, val2] = nums2[index2];

    if (id1 < id2) {
      nums.push([id1, val1]);
      index1++;
    } else if (id2 < id1) {
      nums.push([id2, val2]);
      index2++;
    } else {
      nums.push([id1, val1 + val2]);
      index1++;
      index2++;
    }
  }

  while (index1 < nums1.length) {
    nums.push(nums1[index1]);
    index1++;
  }

  while (index2 < nums2.length) {
    nums.push(nums2[index2]);
    index2++;
  }

  return nums;
}
