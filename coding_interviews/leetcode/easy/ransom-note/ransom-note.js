function canConstruct(ransomNote, magazine) {
  let map = {};

  for (let char of magazine) {
    if (map[char]) {
      map[char] += 1;
    } else {
      map[char] = 1;
    }
  }

  for (let char of ransomNote) {
    if (map[char]) {
      map[char]--;
    } else {
      return false;
    }
  }

  return true;
}
