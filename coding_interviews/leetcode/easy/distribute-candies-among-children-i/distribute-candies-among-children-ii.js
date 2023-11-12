// https://leetcode.com/problems/distribute-candies-among-children-i

function distributeCandies(n, limit) {
  let count = 0;

  for (let i = limit; i >= 0; i--) {
    for (let j = limit; j >= 0; j--) {
      let k = n - i - j;
      if (k >= 0 && k <= limit) {
        count++;
      }
    }
  }

  return count;
}
