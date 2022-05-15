function getMiddle(start, end) {
  return Math.floor((start + end) / 2);
}

function searchInsert(nums, target) {
  let start = 0;
  let end = nums.length - 1;
  let middle = getMiddle(start, end);

  while (start <= end) {
    if (target < nums[middle]) {
      end = middle - 1;
      middle = getMiddle(start, end);
    } else if (target > nums[middle]) {
      start = middle + 1;
      middle = getMiddle(start, end);
    } else {
      return middle;
    }
  }

  return middle + 1;
}
