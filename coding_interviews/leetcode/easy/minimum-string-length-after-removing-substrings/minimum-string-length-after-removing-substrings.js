// https://leetcode.com/problems/minimum-string-length-after-removing-substrings

function minLength(s) {
  while (true) {
    let found = false;
    for (let index = 0; index < s.length - 1; index++) {
      let slice = s.slice(index, index + 2);
      if (['AB', 'CD'].includes(slice)) {
        s = s.slice(0, index) + s.slice(index + 2);
        found = true;
        break;
      }
    }

    if (!found) break;
  }

  return s.length;
}
