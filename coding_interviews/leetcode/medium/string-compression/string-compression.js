// https://leetcode.com/problems/string-compression

function compress(chars) {
  let index = 0,
    p1 = 0;

  while (p1 < chars.length) {
    let p2 = p1;

    while (p2 < chars.length && chars[p1] === chars[p2]) {
      p2++;
    }

    let count = p2 - p1;
    chars[index++] = chars[p1];

    if (count > 1) {
      let countString = count.toString();

      for (let char of countString) {
        chars[index++] = char;
      }
    }

    p1 = p2;
  }

  while (chars.length > index) {
    chars.pop();
  }

  return chars.length;
}
