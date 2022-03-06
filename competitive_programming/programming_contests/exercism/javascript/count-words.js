const SPECIAL_CHARACTERS = /[!@#\$%\^\&*\".,;:?<>~`(\){}[\]\\/\+=_-]/g;
const SPACE_CHARACTERS = /\s+/g;

function isEmptySpace(string) {
  return string !== '';
}

function removeOpenQuote(word) {
  return word.startsWith("'") ? word.substring(1) : word;
}

function removeCloseQuote(word) {
  return word.endsWith("'") ? word.substring(0, word.length - 1) : word;
}

function removeQuotes(word) {
  return removeCloseQuote(removeOpenQuote(word));
}

export const countWords = (phrase) => {
  const words = phrase
    .toLowerCase()
    .replaceAll(SPECIAL_CHARACTERS, ' ')
    .split(SPACE_CHARACTERS)
    .filter(isEmptySpace)
    .map(removeQuotes);

  const wordCounter = {};

  for (const word of words) {
    wordCounter[word] = (wordCounter[word] || 0) + 1;
  }

  return wordCounter;
};
