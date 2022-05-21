function isAnagram(s, t) {
  if (s.length !== t.length) {
    return false;
  }

  let charCount = {};

  for (let index = 0; index < s.length; index++) {
    let char = s[index];

    if (charCount[char]) {
      charCount[char]++;
    } else {
      charCount[char] = 1;
    }
  }

  for (let char of t) {
    if (charCount[char]) {
      charCount[char]--;
    } else {
      return false;
    }
  }

  return true;
}
