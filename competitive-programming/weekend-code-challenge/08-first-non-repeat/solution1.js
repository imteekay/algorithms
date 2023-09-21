const getArrayOfChars = (string = '') => string.split('');

const buildCharsCounter = (arrayOfChars) => {
  const charsCounter = {};
  arrayOfChars.forEach((char) => {
    if (char in charsCounter) {
      charsCounter[char] += 1;
    } else {
      charsCounter[char] = 1;
    }
  });
  return charsCounter;
};

const getFirstNonRepeatingChar = (string = '') => {
  const arrayOfChars = getArrayOfChars(string);
  const charsCounter = buildCharsCounter(arrayOfChars);
  const isNonRepeatingChar = (char) =>
    char in charsCounter && charsCounter[char] === 1;

  return arrayOfChars.find(isNonRepeatingChar) || -1;
};
