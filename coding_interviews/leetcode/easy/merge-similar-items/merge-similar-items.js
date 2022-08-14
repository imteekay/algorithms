function fillHashmapAndList(items, hashmap, list) {
  for (let [value, weight] of items) {
    if (hashmap.has(value)) {
      hashmap.set(value, hashmap.get(value) + weight);
    } else {
      hashmap.set(value, weight);
      list.push(value);
    }
  }
}

function mergeSimilarItems(items1, items2) {
  let hashmap = new Map();
  let list = [];

  fillHashmapAndList(items1, hashmap, list);
  fillHashmapAndList(items2, hashmap, list);

  return list.sort((a, b) => a - b).map((value) => [value, hashmap.get(value)]);
}
