function hasSameLength(words, letters) {
  return words.length !== letters.length;
}

function isArray(arr) {
  return Array.isArray(arr);
}

function bothArrays(words, letters) {
  return isArray(words) && isArray(letters);
}

function compareLettersInArray(words, letters) {
  if (hasSameLength(words, letters) || !bothArrays(words, letters)) {
    return false;
  }

  let firstLetterMatches = true;

  for (let i = 0; i < words.length; i++) {
    if (words[i][0] !== letters[i]) {
      firstLetterMatches = false;
      break;
    }
  }

  return firstLetterMatches;
}

const words = ['ant', 'bear', 'vulture', 'viper', 'deer'];
const letters = ['a', 'b', 'c', 'd', 'e'];

console.log('answer', compareLettersInArray(words, letters));
console.log('answer', compareLettersInArray(words, ['a', 'b', 'v', 'v', 'd']));
