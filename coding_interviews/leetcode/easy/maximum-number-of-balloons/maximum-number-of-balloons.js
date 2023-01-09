function buildHashmap(text) {
  const hashmap = new Map();

  for (let char of text) {
    if (hashmap.has(char)) hashmap.set(char, hashmap.get(char) + 1);
    else hashmap.set(char, 1);
  }

  return hashmap;
}

function maxNumberOfBalloons(text) {
  let hashmap = buildHashmap(text);
  let minCharCount = Infinity;
  let balloon = 'balon';

  for (let char of balloon) {
    if (!hashmap.has(char)) return 0;
    if (['l', 'o'].includes(char))
      minCharCount = Math.min(minCharCount, Math.floor(hashmap.get(char) / 2));
    else minCharCount = Math.min(minCharCount, hashmap.get(char));
  }

  return minCharCount;
}
