function sortKey(array) {
  return [...new Set(array)]
    .sort((a, b) => a - b)
    .map((num) => num.toString())
    .join('*');
}

function threeNumberSum(array, targetSum) {
  array.sort((a, b) => a - b);

  let map = new Map();
  let triplets = [];
  let cache = new Map();

  for (let num of array) {
    map.set(num, map.get(num) + 1 || 1);
  }

  for (let i = 0; i < array.length; i++) {
    for (let j = i + 1; j < array.length; j++) {
      let rest = targetSum - array[i] - array[j];
      let triplet = [array[i], array[j], rest];
      let sortedKey = sortKey(triplet);
      let allEqual =
        array[i] === array[j] &&
        array[i] === rest &&
        map.has(rest) &&
        map.get(rest) >= 3;
      let isFirstEqualRest =
        array[i] !== array[j] &&
        array[i] === rest &&
        map.has(rest) &&
        map.get(rest) >= 2;
      let isSecondEqualRest =
        array[i] !== array[j] &&
        array[j] === rest &&
        map.has(rest) &&
        map.get(rest) >= 2;
      let hasRest = array[i] !== rest && array[j] !== rest && map.has(rest);
      let isEligibleTriplet =
        (allEqual && isFirstEqualRest && isSecondEqualRest) || hasRest;

      if (!cache.has(sortedKey) && isEligibleTriplet) {
        cache.set(sortedKey, 1);
        triplets.push(triplet);
      }
    }
  }

  return triplets;
}
