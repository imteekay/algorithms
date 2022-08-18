function buildHashmap(words) {
  let hashmap = new Map();

  for (let word of words) {
    if (hashmap.has(word)) {
      hashmap.set(word, hashmap.get(word) + 1);
    } else {
      hashmap.set(word, 1);
    }
  }

  return hashmap;
}

function countWords(words1, words2) {
  let words1Counter = buildHashmap(words1);
  let words2Counter = buildHashmap(words2);
  let words = 0;

  for (let [word, counter] of words1Counter) {
    if (
      counter === 1 &&
      words2Counter.has(word) &&
      words2Counter.get(word) === 1
    ) {
      words++;
    }
  }

  return words;
}
