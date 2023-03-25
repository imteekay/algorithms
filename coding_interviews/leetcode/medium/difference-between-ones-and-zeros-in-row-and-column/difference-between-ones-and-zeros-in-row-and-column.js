function traverseGridRow(grid, row) {
  let diff = 0;

  for (let col = 0; col < grid[row].length; col++) {
    let cell = grid[row][col];

    if (cell) {
      diff++;
    } else {
      diff--;
    }
  }

  return diff;
}

function traverseGridCol(grid, col) {
  let diff = 0;

  for (let row = 0; row < grid.length; row++) {
    let cell = grid[row][col];

    if (cell) {
      diff++;
    } else {
      diff--;
    }
  }

  return diff;
}

function onesMinusZeros(grid) {
  let rows = [];
  let cols = [];
  let diffGrid = [];

  for (let row = 0; row < grid.length; row++) {
    let diffRow = [];

    for (let col = 0; col < grid[row].length; col++) {
      let rowDiff;
      let colDiff;

      if (row < rows.length) {
        rowDiff = rows[row];
      } else {
        rowDiff = traverseGridRow(grid, row);
        rows.push(rowDiff);
      }

      if (col < cols.length) {
        colDiff = cols[col];
      } else {
        colDiff = traverseGridCol(grid, col);
        cols.push(colDiff);
      }

      diffRow.push(rowDiff + colDiff);
    }

    diffGrid.push(diffRow);
  }

  return diffGrid;
}
