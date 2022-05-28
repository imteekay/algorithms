function isInsideTheGrid(grid, row, col) {
  return row >= 0 && row < grid.length && col >= 0 && col < grid[0].length;
}

function dfs(grid, row, col) {
  if (isInsideTheGrid(grid, row, col) && grid[row][col] === '1') {
    grid[row][col] = 0; // marked as visited
    dfs(grid, row - 1, col); // top
    dfs(grid, row + 1, col); // bottom
    dfs(grid, row, col - 1); // left
    dfs(grid, row, col + 1); // right
  }
}

function numIslands(grid) {
  let numberOfIslands = 0;

  for (let row = 0; row < grid.length; row++) {
    for (let col = 0; col < grid[row].length; col++) {
      if (grid[row][col] === '1') {
        numberOfIslands++;
        grid[row][col] = 0; // marked as visited

        dfs(grid, row - 1, col); // top
        dfs(grid, row + 1, col); // bottom
        dfs(grid, row, col - 1); // left
        dfs(grid, row, col + 1); // right
      }
    }
  }

  return numberOfIslands;
}
