function threeConsecutiveOdds(nums) {
  let counter = 0;

  for (let num of nums) {
    if (num % 2 === 0) counter = 0;
    else counter++;
    if (counter >= 3) return true;
  }

  return false;
}
