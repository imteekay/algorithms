// https://bigfrontend.dev/problem/remove-characters

function removeBs(input) {
  let output = [];

  for (let char of input) {
    if (char !== 'b') {
      output.push(char);
    }
  }

  return output.join('');
}

function removeACs(input) {
  let index = 0;

  while (index + 1 < input.length) {
    if (input.slice(index, index + 2) === 'ac') {
      input = input.slice(0, index) + input.slice(index + 2);
      index = 0;
    } else {
      index++;
    }
  }

  return input;
}

export function removeChars(input) {
  return removeACs(removeBs(input));
}
