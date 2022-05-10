export function divideArray(nums) {
  const map = {};

  for (let num of nums) {
    if (map[num]) {
      map[num] += 1;
    } else {
      map[num] = 1;
    }
  }

  let hasEqualPairs = true;

  for (let num of Object.values(map)) {
    if (num % 2 !== 0) {
      hasEqualPairs = false;
      break;
    }
  }

  return hasEqualPairs;
}
