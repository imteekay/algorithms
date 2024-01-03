/**
 *
 * Write a function that takes in an n x m two-dimensional array (that can be square-shaped when n == m)
 * and returns a one-dimensional array of all the array's elements in spiral order.
 * Spiral order starts at the top left corner of the two-dimensional array, goes to the right,
 * and proceeds in a spiral pattern all the way until every element has been visited.
 *
 * Input:
 * array = [
 *  [1,   2,  3, 4],
 *  [12, 13, 14, 5],
 *  [11, 16, 15, 6],
 *  [10,  9,  8, 7],
 * ]
 *
 * Output:
 * [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]
 */

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
