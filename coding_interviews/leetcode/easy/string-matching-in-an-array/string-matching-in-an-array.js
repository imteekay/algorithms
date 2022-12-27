function isSubstring(subword, word) {
  for (let index = 0; index <= word.length - subword.length; index++) {
    if (subword === word.slice(index, index + subword.length)) {
      return true;
    }
  }

  return false;
}

function addSubstring(word1, word2, answer) {
  if (word1.length <= word2.length) {
    isSubstring(word1, word2) && answer.add(word1);
  } else {
    isSubstring(word2, word1) && answer.add(word2);
  }
}

function stringMatching(words) {
  let answer = new Set([]);

  for (let i = 0; i < words.length - 1; i++) {
    for (let j = i + 1; j < words.length; j++) {
      let word1 = words[i];
      let word2 = words[j];
      addSubstring(word1, word2, answer);
    }
  }

  return [...answer];
}
