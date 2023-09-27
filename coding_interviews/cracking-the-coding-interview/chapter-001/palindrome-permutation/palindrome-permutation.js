// Palindrome Permutation: Given a string, write a function to check if it is a permutation of a palindrome.
// A palindrome is a word or phrase that is the same forwards and backwards.
// A permutation is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words.
// You can ignore casing and non-letter characters.
// Example:
// Tact Coa
//  - taco cat
//  - atco cta

// Runtime Complexity: O(N), where N = the true length of the string
// Space Complexity: O(N), where N = the true length of the string in the hashmap

function isAlpha(char) {
  return /[_a-zA-Z]/.test(char);
}

function buildMapOsChars(string) {
  const charsMap = new Map();
  const downcasedString = string.toLowerCase();

  for (let char of downcasedString) {
    if (!isAlpha(char)) continue;
    if (charsMap.has(char)) charsMap.set(char, charsMap.get(char) + 1);
    else charsMap.set(char, 1);
  }

  return charsMap;
}

export function palindromePermutation(string) {
  let charsMap = buildMapOsChars(string);
  let numberOfCharsWithOneCount = 0;

  for (let [_, count] of charsMap.entries()) {
    numberOfCharsWithOneCount += count % 2;
  }

  return numberOfCharsWithOneCount <= 1;
}
