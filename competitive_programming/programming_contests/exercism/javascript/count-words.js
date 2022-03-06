/*
contraction:
're
's
'm
*/

const specialCharacters = /[!@#\$%\^\&*\".,;:?<>~`(\){}[\]\\/\+=_-]/g;
const spaceCharacters = /\s+/g;

function removeEmptySpace(string) {
  return string !== '';
}

function cleanWords(word) {
  const chars = [];

  for (let index = 0; index < word.length; index++) {
    // if character ' is the last character in the string
    // we should not add this character: clean it!
    if (word[index] === "'" && index === word.length - 1) {
      continue;
    }

    // if character ' is the first character in the string
    // we should not add this character: clean it!
    if (word[index] === "'" && index === 0) {
      continue;
    }

    // if character ' is not followed by 's', 'm', 't', or 're'
    // we should not add this character: clean it!
    if (
      word[index] === "'" &&
      !['s', 'm', 't'].includes(word[index + 1]) &&
      word.substring(index + 1, index + 3) !== 're'
    ) {
      continue;
    }

    chars.push(word[index]);
  }

  return chars.join('');
}

export const countWords = (phrase) => {
  const words = phrase
    .toLowerCase()
    .replaceAll(specialCharacters, ' ')
    .split(spaceCharacters)
    .filter(removeEmptySpace);

  const cleanedWords = words.map(cleanWords);
  const wordCounter = {};

  for (const word of cleanedWords) {
    if (wordCounter[word]) {
      wordCounter[word] = wordCounter[word] + 1;
    } else {
      wordCounter[word] = 1;
    }
  }

  return wordCounter;
};
