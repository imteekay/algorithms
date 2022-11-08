function isUpperCase(char1, char2) {
  return char1 !== char1.toUpperCase() && char1.toUpperCase() === char2;
}

function isLowerCase(char1, char2) {
  return char2.toLowerCase() !== char2 && char2.toLowerCase() === char1;
}

function isBadPair(char1, char2) {
  return (
    isUpperCase(char1, char2) ||
    isUpperCase(char2, char1) ||
    isLowerCase(char1, char2) ||
    isLowerCase(char2, char1)
  );
}

function makeGood(string, pointer1 = 0, pointer2 = 1) {
  if (string.length <= 1) return string;
  if (pointer2 === string.length) return string;
  console.log(
    string[pointer1],
    string[pointer2],
    isBadPair(string[pointer1], string[pointer2])
  );
  if (isBadPair(string[pointer1], string[pointer2])) {
    return makeGood(
      string.slice(0, pointer1) + string.slice(pointer2 + 1),
      0,
      1
    );
  }

  return makeGood(string, pointer1 + 1, pointer2 + 1);
}
