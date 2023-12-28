function firstNonRepeatingCharacter(string) {
  let map = new Map();

  for (let char of string) {
    map.set(char, map.get(char) + 1 || 1);
  }

  for (let index = 0; index < string.length; index++) {
    if (map.get(string[index]) <= 1) return index;
  }

  return -1;
}
