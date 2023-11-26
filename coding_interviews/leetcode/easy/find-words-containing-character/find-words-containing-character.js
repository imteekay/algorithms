// https://leetcode.com/problems/find-words-containing-character

function findWordsContaining(words, x) {
  let indices = [];

  for (let index = 0; index < words.length; index++) {
    for (let char of words[index]) {
      if (char === x) {
        indices.push(index);
        break;
      }
    }
  }

  return indices;
}
