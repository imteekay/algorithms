// https://leetcode.com/problems/number-of-lines-to-write-string

function toWidthsIndex(char) {
  return char.charCodeAt() - 97;
}

function numberOfLines(widths, s) {
  let output = [1, 0];

  for (let char of s) {
    let width = widths[toWidthsIndex(char)];

    if (output[1] + width <= 100) {
      output[1] = output[1] + width;
    } else {
      output[0]++;
      output[1] = width;
    }
  }

  return output;
}
