function rotate(nums, k) {
  let count = 0;

  while (count < k) {
    const num = nums.pop();
    nums.unshift(num);
    count++;
  }
}
