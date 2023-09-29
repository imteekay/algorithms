// https://leetcode.com/problems/string-compression

function compress(chars) {
  let counter = 1;
  let result = [];

  for (let index = 0; index < chars.length - 1; index++) {
    if (chars[index] === chars[index + 1]) counter++;
    else {
      result.push(chars[index]);
      if (counter > 1) result.push(...counter.toString());
      counter = 1;
    }

    if (index + 1 === chars.length - 1) {
      result.push(chars[index + 1]);
      if (counter > 1) result.push(...counter.toString());
    }
  }

  return result.length;
}
