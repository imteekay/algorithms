// https://leetcode.com/problems/maximum-number-of-words-you-can-type

const canBeTypedWords = function (text, brokenLetters) {
  const words = text.split(' ');
  const broken = buildBrokenMapper(brokenLetters);
  const okWords = words.filter((word) => {
    let foundBroken = false;
    for (let char of word) {
      if (broken[char]) {
        foundBroken = true;
      }
    }

    return !foundBroken;
  });

  return okWords.length;
};

const buildBrokenMapper = (brokenLetters) => {
  const mapper = {};

  for (let letter of brokenLetters) {
    mapper[letter] = true;
  }

  return mapper;
};
