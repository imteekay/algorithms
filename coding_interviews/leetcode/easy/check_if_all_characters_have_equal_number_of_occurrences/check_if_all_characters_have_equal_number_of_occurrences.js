// https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences

const areOccurrencesEqual = function (s) {
  const counter = {};

  for (let i = 0; i < s.length; i++) {
    if (s[i] in counter) counter[s[i]]++;
    else counter[s[i]] = 1;
  }

  return new Set(Object.values(counter)).size === 1;
};
