// https://leetcode.com/problems/distribute-candies-among-children-i

function distributeCandies(n, limit) {
  let count = 0;

  for (let i = limit; i >= 0; i--) {
    for (let j = limit; j >= 0; j--) {
      for (let k = limit; k >= 0; k--) {
        if (i + j + k === n) {
          count++;
        }
      }
    }
  }

  return count;
}
