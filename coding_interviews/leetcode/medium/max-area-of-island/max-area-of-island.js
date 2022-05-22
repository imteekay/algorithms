function isOffTheGrid(grid, row, col) {
  let gridRows = grid.length;
  let gridCols = grid[0].length;
  return row < 0 || row >= gridRows || col < 0 || col >= gridCols;
}

function dfs(grid, row, col, maximumLocalIslandArea = 0) {
  if (isOffTheGrid(grid, row, col) || grid[row][col] === 0) {
    return 0;
  }

  grid[row][col] = 0; // visited

  return (
    1 +
    dfs(grid, row - 1, col, maximumLocalIslandArea) + // top
    dfs(grid, row + 1, col, maximumLocalIslandArea) + // bottom
    dfs(grid, row, col + 1, maximumLocalIslandArea) + // right
    dfs(grid, row, col - 1, maximumLocalIslandArea) // left
  );
}

function maxAreaOfIsland(grid) {
  let maximumIslandArea = 0;

  for (let row = 0; row < grid.length; row++) {
    for (let col = 0; col < grid[row].length; col++) {
      let maximumLocalIslandArea = dfs(grid, row, col);
      maximumIslandArea = Math.max(maximumIslandArea, maximumLocalIslandArea);
    }
  }

  return maximumIslandArea;
}
