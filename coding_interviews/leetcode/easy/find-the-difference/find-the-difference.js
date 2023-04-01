function buildMap(string) {
  let hashmap = new Map();

  for (let char of string) {
    if (hashmap.has(char)) hashmap.set(char, hashmap.get(char) + 1);
    else hashmap.set(char, 1);
  }

  return hashmap;
}

function findTheDifference(s, t) {
  let hashmap = buildMap(s);

  for (let char of t) {
    if (hashmap.has(char) && hashmap.get(char) > 0) {
      hashmap.set(char, hashmap.get(char) - 1);
      continue;
    }

    return char;
  }
}
