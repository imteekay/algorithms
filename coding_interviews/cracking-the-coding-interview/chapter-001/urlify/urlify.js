// URLlify: Write a method to replace all spaces in a string with '%20'.
// You may assume that the string has sufficient space at the end to hold the additional characters,
// and that you are given the "true" length of the string

// Runtime Complexity: O(N), where N = the true length of the string
// Space Complexity: O(N), where N = the true length of the string in the new array

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

// Runtime Complexity: O(N), where N = the true length of the string
// Space Complexity: O(N), where N = the true length of the string in the new array

export function urlifyForward(string, length, placeholder = '%20') {
  let output = [];
  let index = 0;
  let space = ' ';

  const moveForward = () => {
    while (string[index] === space) {
      index++;
    }
  };

  while (index < length) {
    if (string[index] === space) {
      output.push(placeholder);
      moveForward();
    } else {
      output.push(string[index]);
      index++;
    }
  }

  return output.join('');
}
