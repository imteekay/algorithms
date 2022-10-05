function stringToMap(string) {
  const map = new Map();

  for (let char of string) {
    map.set(char, true);
  }

  return map;
}

const firstRow = stringToMap('qwertyuiop');
const secondRow = stringToMap('asdfghjkl');
const thirdRow = stringToMap('zxcvbnm');

function belongsToRow(word, row) {
  for (let char of word) {
    if (!row.has(char)) {
      return false;
    }
  }

  return true;
}

function belongsToSomeRow(word) {
  let belongsToARow = belongsToRow(word, firstRow);
  if (belongsToARow) return true;
  belongsToARow = belongsToRow(word, secondRow);
  if (belongsToARow) return true;
  belongsToARow = belongsToRow(word, thirdRow);
  return belongsToARow;
}

function findWords(words) {
  const result = [];

  for (let word of words) {
    if (belongsToSomeRow(word.toLowerCase())) {
      result.push(word);
    }
  }

  return result;
}
