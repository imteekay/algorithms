function isTheSame(word, wordFromDict) {
  if (word.length !== wordFromDict.length) return false;

  for (let index = 0; index < word.length; index++) {
    let wordChar = word[index];
    let wordFromDictChar = wordFromDict[index];

    if (wordChar === '.') {
      continue;
    }

    if (wordChar !== wordFromDictChar) {
      return false;
    }
  }

  return true;
}

const WordDictionary = function () {
  this.hashmap = {};
};

WordDictionary.prototype.addWord = function (word) {
  if (!this.hashmap[word]) {
    this.hashmap[word] = true;
  }
};

WordDictionary.prototype.search = function (word) {
  if (this.hashmap[word]) {
    return this.hashmap[word];
  }

  let words = Object.keys(this.hashmap);

  for (let wordFromDict of words) {
    if (isTheSame(word, wordFromDict)) {
      return true;
    }
  }

  return false;
};
