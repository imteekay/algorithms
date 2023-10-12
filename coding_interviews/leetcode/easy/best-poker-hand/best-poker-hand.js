// https://leetcode.com/problems/best-poker-hand

function buildMap(list) {
  let map = new Map();

  for (let item of list) {
    if (map.has(item)) map.set(item, map.get(item) + 1);
    else map.set(item, 1);
  }

  return map;
}

function bestHand(ranks, suits) {
  let suitsMap = buildMap(suits);

  for (let [_, count] of suitsMap.entries()) {
    if (count >= 5) return 'Flush';
  }

  let ranksMap = buildMap(ranks);
  let hasPair = false;

  for (let [_, count] of ranksMap.entries()) {
    if (count >= 3) return 'Three of a Kind';
    if (count >= 2) hasPair = true;
  }

  return hasPair ? 'Pair' : 'High Card';
}
