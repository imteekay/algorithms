function hasPrefix(word, pref) {
  if (pref.length > word.length) {
    return false;
  }

  let matchesPrefix = true;

  for (let i = 0; i < pref.length; i++) {
    if (word[i] !== pref[i]) {
      matchesPrefix = false;
      break;
    }
  }

  return matchesPrefix;
}

export function prefixCount(words, pref) {
  let count = 0;

  words.forEach((word) => {
    if (hasPrefix(word, pref)) {
      count++;
    }
  });

  return count;
}
