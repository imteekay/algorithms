// Is Unique: Implement an algorithm to determine if a string has all unique characters.

// Using a hashmap to count the number of characters in the string
// if there's already a character, it should return false as a result
// if it passes the entire string, it means it's a string with unique characters
// Time Complexity: O(N), N = number of charactes in the string
// Space Complexity: O(N), N = number of charactes in the string stored in the `charMap` hashmap
export function isUnique(string) {
  const charMap = new Map();

  for (let char of string) {
    if (charMap.has(char)) return false;
    charMap.set(char, 1);
  }

  return true;
}

// Using a set to store all unique characters of the string
// if the size of the set is equal to the string, the string has unique characters
// Time Complexity: O(N), N = number of charactes in the string
// Space Complexity: O(N), N = number of charactes in the string stored in the `uniqueChars` set
export function isUniqueWithSet(string) {
  const uniqueChars = new Set();

  for (let char of string) {
    uniqueChars.add(char);
  }

  return uniqueChars.size === string.length;
}

// Using a set to store all unique characters of the string
// A simplified version using the Set constructor
// Time Complexity: O(N), N = number of charactes in the string
// Space Complexity: O(N), N = number of charactes in the string stored in the `uniqueChars` set
export function isUniqueWithSetSimplified(string) {
  return string.length === new Set(string).size;
}

// --- What if you cannot use additional data structures? ---

// Sorting and comparing adjacent characters
// Runtime Complexity: O(NlogN) because of the sorting runtime complexity
// Space Complexity: O(N) because of the newly created array
export function isUniqueWithoutDS(string) {
  let sortedString = [...string].sort(
    (a, b) => a.charCodeAt() - b.charCodeAt()
  );

  for (let index = 0; index < sortedString.length - 1; index++) {
    if (sortedString[index] === sortedString[index + 1]) return false;
  }

  return true;
}
