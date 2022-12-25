function createCounter(word) {
  const counter = new Map();

  for (let char of word) {
    if (counter.has(char)) counter.set(char, counter.get(char) + 1);
    else counter.set(char, 1);
  }

  return counter;
}

function isSimilar(word, counter1, counter2) {
  for (let char of word) {
    const count1 = counter1.get(char);
    const count2 = (counter2.has(char) && counter2.get(char)) || 0;
    if (Math.abs(count1 - count2) > 3) return false;
  }

  return true;
}

function checkAlmostEquivalent(word1, word2) {
  const word1Counter = createCounter(word1);
  const word2Counter = createCounter(word2);
  return (
    isSimilar(word1, word1Counter, word2Counter) &&
    isSimilar(word2, word2Counter, word1Counter)
  );
}
