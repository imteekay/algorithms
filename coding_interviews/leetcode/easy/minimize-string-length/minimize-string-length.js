// https://leetcode.com/problems/minimize-string-length

function minimizedStringLength(s) {
  let set = new Set();

  for (let char of s) {
    set.add(char);
  }

  return set.size;
}
