function search(nums, target) {
  let start = 0;
  let end = nums.length - 1;
  let middle = Math.floor((end + start) / 2);
  let index = -1;
  let found = false;

  while (start <= end && !found) {
    if (target > nums[middle]) {
      start = middle + 1;
      middle = Math.floor((end + start) / 2);
    } else if (target < nums[middle]) {
      end = middle - 1;
      middle = Math.floor((end + start) / 2);
    } else {
      index = middle;
      found = true;
    }
  }

  return index;
}
