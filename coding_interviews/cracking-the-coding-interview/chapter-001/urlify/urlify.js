// URLlify: Write a method to replace all spaces in a string with '%20'.
// You may assume that the string has sufficient space at the end to hold the additional characters,
// and that you are given the "true" length of the string

export function urlify(string, length, placeholder = '%20') {
  let output = [];
  let lastChar = '';
  let space = ' ';

  for (let index = 0; index < length; index++) {
    let char = string[index];

    if (char !== space) {
      output.push(char);
    }

    if (char === space && lastChar !== space) {
      output.push(placeholder);
    }

    lastChar = char;
  }

  return output.join('');
}
