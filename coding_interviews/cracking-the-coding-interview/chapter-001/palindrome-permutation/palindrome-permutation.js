// Palindrome Permutation: Given a string, write a function to check if it is a permutation of a palindrome.
// A palindrome is a word or phrase that is the same forwards and backwards.
// A permutation is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words.
// You can ignore casing and non-letter characters.
// Example:
// Tact Coa
//  - taco cat
//  - atco cta

// Runtime Complexity: O(N), where N = the true length of the string
// Space Complexity: O(N), where N = the true length of the string in the new array

function isAlpha(char) {
  return /[_a-zA-Z]/.test(char);
}

export function palindromePermutation(string) {
  const charsMap = new Map();

  for (let char of string) {
    if (!isAlpha(char)) continue;
    let downcasedChar = char.toLowerCase();
    if (charsMap.has(downcasedChar))
      charsMap.set(downcasedChar, charsMap.get(downcasedChar) + 1);
    else charsMap.set(downcasedChar, 1);
  }

  let numberOfCharsWithOneCount = 0;

  for (let [_, count] of charsMap.entries()) {
    numberOfCharsWithOneCount += count % 2;
  }

  return numberOfCharsWithOneCount <= 1;
}
