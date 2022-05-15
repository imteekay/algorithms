function reverseInPlace(nums, start, end) {
  while (start < end) {
    let temporaryStart = nums[start];
    nums[start] = nums[end];
    nums[end] = temporaryStart;
    start++;
    end--;
  }
}

function rotate(nums, k) {
  if (k <= 0) {
    return;
  }

  let start = 0;
  let end = nums.length - 1;
  let limit = k % nums.length;

  reverseInPlace(nums, start, end - limit);
  reverseInPlace(nums, end - limit + 1, end);
  reverseInPlace(nums, start, end);
}
