// https://leetcode.com/problems/is-subsequence

function isSubsequence(s, t) {
  let sIndex = 0;
  let tIndex = 0;

  while (sIndex < s.length && tIndex < t.length) {
    let sChar = s[sIndex];
    let tChar = t[tIndex];

    if (sChar === tChar) {
      sIndex++;
      tIndex++;
    } else {
      tIndex++;
    }
  }

  return sIndex === s.length;
}
