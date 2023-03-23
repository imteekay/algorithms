function sortDesc(list) {
  return list.sort((a, b) => b - a);
}

const mapper = {
  0: 'Gold Medal',
  1: 'Silver Medal',
  2: 'Bronze Medal',
};

function buildHashmap(list) {
  let hashmap = new Map();

  for (let [index, item] of list.entries()) {
    hashmap.set(item, mapper[index] || (index + 1).toString());
  }

  return hashmap;
}

function getRelativeRanks(score, hashmap) {
  let rank = [];

  for (let value of score) {
    rank.push(hashmap.get(value));
  }

  return rank;
}

function findRelativeRanks(score) {
  const sortedScore = sortDesc([...score]);
  const hashmap = buildHashmap(sortedScore);
  return getRelativeRanks(score, hashmap);
}
