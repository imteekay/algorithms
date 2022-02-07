// Is Unique: Implement an algorithm to determine if a string has all unique characters.
// What if you cannot use additional data structures?

export function isUnique(string) {
  const charMap = {};
  let unique = true;

  for (let i = 0; i < string.length; i++) {
    if (string[i] in charMap) {
      unique = false;
      break;
    }

    charMap[string[i]] = true;
  }

  return unique;
}

export function isUniqueWithSet(string) {
  const uniqueChars = new Set();

  for (let i = 0; i < string.length; i++) {
    uniqueChars.add(string[i]);
  }

  return uniqueChars.size === string.length;
}

export function isUniqueWithSetSimplified(string) {
  return string.length === new Set(string).size;
}
