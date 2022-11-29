function isInGrid(grid, row, col) {
  return row >= 0 && col >= 0 && row < grid.length && col < grid.length;
}

const DIAGONAL = -1;

function getDiagonalFromLeftToRight(grid) {
  let row = 0;
  let col = 0;
  let values = [];

  while (isInGrid(grid, row, col)) {
    values.push(grid[row][col]);
    grid[row][col] = DIAGONAL;
    row++;
    col++;
  }

  return values;
}

function getDiagonalFromRightToLeft(grid) {
  let row = 0;
  let col = grid.length - 1;
  let values = [];

  while (isInGrid(grid, row, col)) {
    if (grid[row][col] !== DIAGONAL) {
      values.push(grid[row][col]);
      grid[row][col] = DIAGONAL;
    }

    row++;
    col--;
  }

  return values;
}

function isDiagonalNonZero(diagonal) {
  return diagonal.filter((value) => value === 0).length === 0;
}

function isOtherZero(grid) {
  for (let row = 0; row < grid.length; row++) {
    for (let col = 0; col < grid.length; col++) {
      if (grid[row][col] !== DIAGONAL && grid[row][col] !== 0) {
        return false;
      }
    }
  }

  return true;
}

function checkXMatrix(grid) {
  const fromLeftToRightDiagonalValues = getDiagonalFromLeftToRight(grid);
  const fromRightToLeftDiagonalValues = getDiagonalFromRightToLeft(grid);
  const isFromLeftToRightNonZero = isDiagonalNonZero(
    fromLeftToRightDiagonalValues
  );
  const isFromRightToLeftNonZero = isDiagonalNonZero(
    fromRightToLeftDiagonalValues
  );
  const isOtherElementsZero = isOtherZero(grid);

  return (
    isFromLeftToRightNonZero && isFromRightToLeftNonZero && isOtherElementsZero
  );
}
