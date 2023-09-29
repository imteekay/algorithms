// String Compression: Implement a method to perform basic string compression using the counts of repeated characters.
// For example, the string `aabcccccaaa` would become `a2b1c5a3`.
// If the "compressed" string would not become smaller than the original string, your method should return the original string.
// You can assume the string has only uppercase and lowercase letters (a-z)

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

  return chars;
}
