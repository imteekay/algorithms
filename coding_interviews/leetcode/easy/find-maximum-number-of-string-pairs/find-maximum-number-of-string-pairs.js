// https://leetcode.com/problems/find-maximum-number-of-string-pairs

function paired(s1, s2) {
  for (let i = 0; i < s1.length; i++) {
    if (s1[i] !== s2[s2.length - 1 - i]) {
      return false;
    }
  }

  return true;
}

function maximumNumberOfStringPairs(words) {
  let max = 0;

  for (let i = 0; i < words.length - 1; i++) {
    for (let j = i + 1; j < words.length; j++) {
      if (paired(words[i], words[j])) {
        max++;
      }
    }
  }

  return max;
}
