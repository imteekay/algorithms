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

function markNonIsland(matrix, rowIndex, colIndex) {
  if (
    rowIndex < 0 ||
    rowIndex >= matrix.length ||
    colIndex < 0 ||
    colIndex >= matrix[rowIndex].length ||
    [0, 2].includes(matrix[rowIndex][colIndex])
  ) {
    return;
  }

  matrix[rowIndex][colIndex] = 2;
  markNonIsland(matrix, rowIndex - 1, colIndex); // top
  markNonIsland(matrix, rowIndex + 1, colIndex); // bottom
  markNonIsland(matrix, rowIndex, colIndex - 1); // left
  markNonIsland(matrix, rowIndex, colIndex + 1); // right
}

function removeIslands(matrix) {
  const lastRowIndex = matrix.length - 1;
  const lastColIndex = matrix[0].length - 1;

  for (let colIndex = 0; colIndex < matrix[0].length; colIndex++) {
    if (matrix[0][colIndex] === 1) markNonIsland(matrix, 0, colIndex);
    if (matrix[lastRowIndex][colIndex] === 1)
      markNonIsland(matrix, lastRowIndex, colIndex);
  }

  for (let rowIndex = 0; rowIndex < matrix.length; rowIndex++) {
    if (matrix[rowIndex][0] === 1) markNonIsland(matrix, rowIndex, 0);
    if (matrix[rowIndex][lastColIndex] === 1)
      markNonIsland(matrix, rowIndex, lastColIndex);
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
