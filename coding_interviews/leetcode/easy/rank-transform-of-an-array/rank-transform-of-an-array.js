// https://leetcode.com/problems/rank-transform-of-an-array

/**
 * [40,10,20,30]
 * [10,20,30,40] => O(NlogN)
 * {10: 1, 20: 2, 30: 3, 40: 4} => O(N), N = array size
 * [4,1,2,3] => O(N)
 * runtime: O(NlogN)
 * space: O(N)
 */
function buildMap(set) {
  let map = new Map();
  let index = 1;

  for (let num of set.values()) {
    map.set(num, index);
    index++;
  }

  return map;
}

function buildRank(arr, map) {
  let rank = [];

  for (let num of arr) {
    rank.push(map.get(num));
  }

  return rank;
}

function arrayRankTransform(arr) {
  const sortedSet = new Set([...arr].sort((a, b) => a - b));
  const map = buildMap(sortedSet);
  return buildRank(arr, map);
}
