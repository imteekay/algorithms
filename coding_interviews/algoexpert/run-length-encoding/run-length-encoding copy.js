function runLengthEncoding(string) {
  let currentChar;
  let num = 1;
  let result = [];

  for (let index = 0; index < string.length; index++) {
    currentChar = string[index];
    if (currentChar === string[index + 1] && num < 9) {
      num++;
    } else {
      result.push(`${num}${currentChar}`);
      num = 1;
    }
  }

  return result.join('');
}
