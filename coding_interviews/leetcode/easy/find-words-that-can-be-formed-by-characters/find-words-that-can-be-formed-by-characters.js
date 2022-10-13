function buildCounter(chars) {
  let counter = new Map();

  for (let char of chars) {
    if (counter.has(char)) counter.set(char, counter.get(char) + 1);
    else counter.set(char, 1);
  }

  return counter;
}

function isGood(word, counterCopy) {
  for (let char of word) {
    if (counterCopy.has(char) && counterCopy.get(char) > 0)
      counterCopy.set(char, counterCopy.get(char) - 1);
    else return false;
  }

  return true;
}

function countCharacters(words, chars) {
  let counter = buildCounter(chars);
  let counterCopy;
  let goodWords = [];

  for (let word of words) {
    counterCopy = new Map(counter);
    if (isGood(word, counterCopy)) goodWords.push(word);
  }

  return goodWords.reduce((lengths, word) => lengths + word.length, 0);
}
