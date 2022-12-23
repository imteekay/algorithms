function buildCharsMap(word) {
  const map = new Map();

  for (let char of word) {
    if (map.has(char)) map.set(char, map.get(char) + 1);
    else map.set(char, 1);
  }

  return map;
}

function hasAllChars(word, charsMap) {
  for (let char of word) {
    if (!charsMap.has(char)) return false;
  }

  return true;
}

function isSimilar(word1, word2) {
  const word1CharsMap = buildCharsMap(word1);
  const word2CharsMap = buildCharsMap(word2);
  return hasAllChars(word1, word2CharsMap) && hasAllChars(word2, word1CharsMap);
}

function similarPairs(words) {
  let count = 0;

  for (let i = 0; i < words.length - 1; i++) {
    for (let j = i + 1; j < words.length; j++) {
      if (isSimilar(words[i], words[j])) count++;
    }
  }

  return count;
}
