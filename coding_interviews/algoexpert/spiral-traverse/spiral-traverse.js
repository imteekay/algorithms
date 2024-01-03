// Right: keep the row and increase the column
// Bottom: keep the column and increase the row
// Left: keep the row and decrease the column
// Top: keep the column and decrease the row

function spiralTraverse(array) {
  let row = 0;
  let col = 0;
  let endRow = array.length - 1;
  let endCol = array[0].length - 1;
  let output = [];
  let command = 'R';

  while (col <= endCol && row <= endRow) {
    if (command === 'R') {
      for (let index = col; index <= endCol; index++) {
        output.push(array[row][index]);
      }

      row++;
      command = 'B';
      continue;
    }

    if (command === 'B') {
      for (let index = row; index <= endRow; index++) {
        output.push(array[index][endCol]);
      }

      endCol--;
      command = 'L';
      continue;
    }

    if (command === 'L') {
      for (let index = endCol; index >= col; index--) {
        output.push(array[endRow][index]);
      }

      endRow--;
      command = 'T';
      continue;
    }

    if (command === 'T') {
      for (let index = endRow; index >= row; index--) {
        output.push(array[index][col]);
      }

      col++;
      command = 'R';
      continue;
    }
  }

  return output;
}
