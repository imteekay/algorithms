function smallestEqual(nums) {
  for (let [index, num] of nums.entries()) {
    if (index % 10 === num) {
      return index;
    }
  }

  return -1;
}
