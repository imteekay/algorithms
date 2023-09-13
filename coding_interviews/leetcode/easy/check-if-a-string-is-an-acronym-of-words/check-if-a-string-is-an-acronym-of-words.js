// https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words

function isAcronym(words, s) {
  if (words.length !== s.length) return false;

  for (let index = 0; index < s.length; index++) {
    if (words[index][0] !== s[index]) {
      return false;
    }
  }

  return true;
}
