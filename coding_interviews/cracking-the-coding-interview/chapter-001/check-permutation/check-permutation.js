// Given two strings, write a method to decide if one is a permutation of the other

// If they have different lengths, they are not permutations
// Build a hashmap of characters of one of the strings
// Iterate through the other string and check if the characters are in the hashmap
// If there's no match in the hashmap, they are not permutations
// If it passes the loop, they are permutations.
// Runtime Complexity: O(N), where N = the length of the string
// Space Complexity: O(N), where N = the length of the string

function buildCharsMap(string) {
  const charsMap = new Map();

  for (let char of string) {
    if (charsMap.has(char)) charsMap.set(char, charsMap.get(char) + 1);
    else charsMap.set(char, 1);
  }

  return charsMap;
}

export function checkPermutation(s1, s2) {
  if (s1.length !== s2.length) return false;
  const charsMap = buildCharsMap(s1);

  for (let char of s2) {
    if (!charsMap.has(char)) {
      return false;
    }

    if (charsMap.get(char) === 0) {
      return false;
    }

    charsMap.set(char, charsMap.get(char) - 1);
  }

  return true;
}
