function hasPrefix(word, searchWord) {
  if (searchWord.length > word.length) return false;

  for (let index = 0; index < searchWord.length; index++) {
    if (searchWord[index] !== word[index]) return false;
  }

  return true;
}

function isPrefixOfWord(sentence, searchWord) {
  const words = sentence.split(' ');

  for (let index = 0; index < words.length; index++) {
    if (hasPrefix(words[index], searchWord)) return index + 1;
  }

  return -1;
}
