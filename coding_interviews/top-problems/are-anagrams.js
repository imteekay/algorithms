function hasDifferentLengths(string1, string2) {
  return string1.length !== string2.length;
}

function buildCharsCount(string) {
  let charactersCounter = {};

  for (let char of string) {
    if (charactersCounter[char]) {
      charactersCounter[char]++;
    } else {
      charactersCounter[char] = 1;
    }
  }

  return charactersCounter;
}

export function areAnagrams(string1, string2) {
  if (hasDifferentLengths(string1, string2)) return false;

  let charactersCounter1 = buildCharsCount(string1);
  let charactersCounter2 = buildCharsCount(string2);

  for (let char of Object.keys(charactersCounter1)) {
    if (charactersCounter1[char] !== charactersCounter2[char]) {
      return false;
    }
  }

  return true;
}
