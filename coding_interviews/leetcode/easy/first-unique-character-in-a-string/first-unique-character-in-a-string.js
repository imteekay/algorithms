function firstUniqChar(s) {
  let charCount = {};

  for (let char of s) {
    if (charCount[char]) {
      charCount[char]++;
    } else {
      charCount[char] = 1;
    }
  }

  for (let index = 0; index < s.length; index++) {
    if (charCount[s[index]] === 1) {
      return index;
    }
  }

  return -1;
}
