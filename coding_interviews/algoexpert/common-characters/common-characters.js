// Runtime: (N * M), N = number of strings and M = length of biggest string
// Space: (M), M = length of biggest string

/**
 * Write a function that takes in a non-empty list of non-empty strings and returns
 * a list of characters that are common to all strings in the list, ignoring multiplicity.
 * Note that the strings are not guaranteed to only contain alphanumeric characters.
 * The list you return can be in any order.
 *
 * Input:
 * strings = ["abc", "bcd", "cbaccd"]
 *
 * Output:
 * ["b", "c"] // The characters could be ordered differently.
 */

function commonCharacters(strings) {
  let map = new Map();
  let result = [];

  for (let string of strings) {
    let set = new Set(string);

    for (let char of set) {
      map.set(char, map.get(char) + 1 || 1);
    }
  }

  for (let [char, count] of map) {
    if (count === strings.length) {
      result.push(char);
    }
  }

  return result;
}
