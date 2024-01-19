// Decode message
// https://bigfrontend.dev/problem/decode-message

export function decode(message) {
  let code = '';
  let row = -1;
  let col = -1;
  let move = 'downRight';

  const moveDownRight = () => {
    row++;
    col++;

    while (row < message.length && col < message[0].length) {
      code += message[row][col];
      row++;
      col++;
    }

    row--;
    col--;
  };

  const moveUpRight = () => {
    row--;
    col++;

    while (row > 0 && col < message[0].length - 1) {
      code += message[row][col];
      row--;
      col++;
    }

    row++;
    col--;
  };

  while (row !== message.length - 1 && col !== message[0].length - 1) {
    if (move === 'downRight') {
      moveDownRight();
      move = 'upRight';
    }

    if (move === 'upRight') {
      moveUpRight();
      move = 'downRight';
    }
  }

  return code;
}
