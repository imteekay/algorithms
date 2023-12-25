function runLengthEncoding(string) {
  if (string.length === 1) {
    return `1${string}`;
  }

  let currentChar = string[0];
  let num = 1;
  let result = [];

  for (let index = 1; index < string.length; index++) {
    let char = string[index];

    if (char === currentChar) {
      if (num === 9) {
        result.push(num);
        result.push(currentChar);
        num = 1;
      } else {
        num++;
      }
    } else {
      result.push(num);
      result.push(currentChar);
      num = 1;
      currentChar = char;
    }

    if (index === string.length - 1) {
      result.push(num);
      result.push(currentChar);
    }
  }

  return result.join('');
}
