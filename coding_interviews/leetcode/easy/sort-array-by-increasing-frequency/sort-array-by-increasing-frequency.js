function buildCounter(nums) {
  let counter = new Map();

  for (let num of nums) {
    if (counter.has(num)) counter.set(num, counter.get(num) + 1);
    else counter.set(num, 1);
  }

  return counter;
}

function toPairs(counter) {
  const pairs = [];

  for (let [key, value] of counter.entries()) {
    pairs.push([key, value]);
  }

  return pairs;
}

function byCount(pair1, pair2) {
  if (pair1[1] < pair2[1]) return -1;
  if (pair1[1] === pair2[1] && pair1[0] >= pair2[0]) return -1;
  if (pair1[1] === pair2[1] && pair1[0] < pair2[0]) return 1;
  if (pair1[1] > pair2[1]) return 1;
  return 0;
}

function buildResult(pairs) {
  const result = [];

  for (let [num, count] of pairs) {
    for (let counter = 1; counter <= count; counter++) {
      result.push(num);
    }
  }

  return result;
}

function frequencySort(nums) {
  const counter = buildCounter(nums);
  const pairs = toPairs(counter);
  pairs.sort(byCount);
  return buildResult(pairs);
}
