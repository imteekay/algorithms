// Runtime: (N * M), N = number of strings and M = length of biggest string
// Space: (M), M = length of biggest string

function commonCharacters(strings) {
  let map = new Map();

  for (let string of strings) {
    let set = new Set(string);

    for (let char of set) {
      map.set(char, map.get(char) + 1 || 1);
    }
  }

  let result = [];

  for (let [char, count] of map) {
    if (count === strings.length) {
      result.push(char);
    }
  }

  return result;
}
