// https://leetcode.com/problems/search-insert-position

const searchInsert = (nums, target) => {
  let start = 0;
  let end = nums.length - 1;

  while (start <= end) {
    middle = Math.floor((start + end) / 2);
    if (nums[middle] === target) return middle;
    if (target > nums[middle]) start = middle + 1;
    if (target < nums[middle]) end = middle - 1;
  }

  return start;
};

const print = (nums, target) => console.log(searchInsert(nums, target));

print([1, 3, 5, 6], 5);
print([1, 3, 5, 6], 2);
print([1, 3, 5, 6], 7);
print([1, 3, 5, 6], 0);
print([1], 0);
