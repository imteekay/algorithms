function isEmpty(grid) {
  let lastRow = grid[grid.length - 1];

  for (let col = 0; col < grid[0].length; col++) {
    if (lastRow[col] !== 0) return false;
  }

  return true;
}

function deleteGreatestValue(grid) {
  let result = 0;

  while (!isEmpty(grid)) {
    let max = -Infinity;

    for (let row = 0; row < grid.length; row++) {
      let maxCell = -Infinity;
      let maxCol = -Infinity;

      for (let col = 0; col < grid[row].length; col++) {
        const cell = grid[row][col];

        if (cell > maxCell) {
          maxCell = Math.max(cell, maxCell);
          maxCol = col;
        }
      }

      max = Math.max(maxCell, max);
      grid[row][maxCol] = 0;
    }

    result += max;
  }

  return result;
}
