// One Away: There are three types of edits that can be performed on strings: insert a character, remove a character, or replace a character.
// Given two strings, write a function to check if they are one edit (or zero edits) away

// Examples
// pale, ple -> true
// pales, pale -> true
// pale, bale -> true
// pale, bake -> false

/**
 * pale => {p: 1, a: 1, l: 1, e: 1}
 * ple => {p: 1, l: 1, e: 1}
 * bake => {b: 1, a: 1, k: 1, e: 1}
 */

function buildCharsCount(string) {
  let charsCount = new Map();

  for (let char of string) {
    if (charsCount.has(char)) charsCount.set(char, charsCount.get(char) + 1);
    else charsCount.set(char, 1);
  }

  return charsCount;
}

export function oneAway(s1, s2) {
  if (s1.length - s2.length >= 2) return false;
  if (s2.length - s1.length >= 2) return false;

  let charsCount1 = buildCharsCount(s1);
  let charsCount2 = buildCharsCount(s2);
  let string = charsCount1.size >= charsCount2.size ? s1 : s2;
  let [map1, map2] =
    charsCount1.size >= charsCount2.size
      ? [charsCount1, charsCount2]
      : [charsCount2, charsCount1];
  let numberOfEdits = 0;

  for (let char of string) {
    let count1 = map1.get(char) || 0;
    let count2 = map2.get(char) || 0;
    numberOfEdits += count1 - count2;
  }

  return [0, 1].includes(numberOfEdits);
}
