// index to alphabet char
const alphabet = 'abcdefghijklmnopqrstuvwxyz';

alphabet[0]; // a
alphabet[1]; // b

// -------------------- // --------------------

// alphabet char to index
function getIndexFromChar(char) {
  return char.charCodeAt() - 97;
}

getIndexFromChar('a'); // 0
getIndexFromChar('b'); // 1
