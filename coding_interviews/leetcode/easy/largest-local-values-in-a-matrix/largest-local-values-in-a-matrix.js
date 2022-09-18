function getLargestFromGrid(grid, startRow, startCol, endRow, endCol) {
  let largest = -Infinity;

  for (let row = startRow; row <= endRow; row++) {
    for (let col = startCol; col <= endCol; col++) {
      largest = Math.max(largest, grid[row][col]);
    }
  }

  return largest;
}

function largestLocal(grid) {
  const generatedGrid = [];

  for (let row = 0; row < grid.length - 2; row++) {
    const generatedRow = [];

    for (let col = 0; col < grid[row].length - 2; col++) {
      generatedRow.push(getLargestFromGrid(grid, row, col, row + 2, col + 2));
    }

    generatedGrid.push(generatedRow);
  }

  return generatedGrid;
}
