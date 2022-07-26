function hasPrefix(word, s) {
  for (let index = 0; index < word.length; index++) {
    if (word[index] !== s[index]) {
      return false;
    }
  }

  return true;
}

function countPrefixes(words, s) {
  let counter = 0;

  for (let word of words) {
    if (word.length <= s.length && hasPrefix(word, s)) {
      counter++;
    }
  }

  return counter;
}
