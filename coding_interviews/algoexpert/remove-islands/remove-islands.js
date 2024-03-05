/**
You're given a two-dimensional array (a matrix) of potentially unequal height and width containing only 0s and 1s.
The matrix represents a two-toned image, where each 1 represents black and each 0 represents white.
An island is defined as any number of 1s that are horizontally or vertically adjacent (but not diagonally adjacent)
and that don't touch the border of the image. In other words, a group of horizontally or vertically adjacent 1s isn't an island
if any of those 1s are in the first row, last row, first column, or last column of the input matrix.
Note that an island can twist. In other words, it doesn't have to be a straight vertical line or a straight horizontal line;
it can be L-shaped, for example.

You can think of islands as patches of black that don't touch the border of the two-toned image.
Write a function that returns a modified version of the input matrix, where all of the islands are removed.
You remove an island by replacing it with 0s.

Naturally, you're allowed to mutate the input matrix.
 */

function removeIsland(matrix, rowIndex, colIndex) {
  if (
    rowIndex < 0 ||
    rowIndex >= matrix.length ||
    colIndex < 0 ||
    colIndex >= matrix[rowIndex].length
  ) {
    return;
  }

  if ([0, 2].includes(matrix[rowIndex][colIndex])) {
    return;
  }

  matrix[rowIndex][colIndex] = 2;
  removeIsland(matrix, rowIndex - 1, colIndex); // top
  removeIsland(matrix, rowIndex + 1, colIndex); // bottom
  removeIsland(matrix, rowIndex, colIndex - 1); // left
  removeIsland(matrix, rowIndex, colIndex + 1); // right
}

function removeIslands(matrix) {
  for (let rowIndex = 0; rowIndex < matrix.length; rowIndex++) {
    for (let colIndex = 0; colIndex < matrix[rowIndex].length; colIndex++) {
      if (
        matrix[rowIndex][colIndex] === 1 &&
        (rowIndex === 0 ||
          rowIndex === matrix.length - 1 ||
          colIndex === 0 ||
          colIndex === matrix[rowIndex].length - 1)
      ) {
        removeIsland(matrix, rowIndex, colIndex);
      }
    }
  }

  for (let rowIndex = 0; rowIndex < matrix.length; rowIndex++) {
    for (let colIndex = 0; colIndex < matrix[rowIndex].length; colIndex++) {
      if (matrix[rowIndex][colIndex] === 1) {
        matrix[rowIndex][colIndex] = 0;
      }

      if (matrix[rowIndex][colIndex] === 2) {
        matrix[rowIndex][colIndex] = 1;
      }
    }
  }

  return matrix;
}
