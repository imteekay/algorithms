function isOffGrid(grid, row, col) {
  return row < 0 || row >= grid.length || col < 0 || col >= grid[0].length;
}

function isWater(grid, row, col) {
  return grid[row][col] === 0;
}

function isPartOfIsland(grid, row, col) {
  return grid[row][col] === 1;
}

function wasAlreadyVisited(grid, row, col) {
  return grid[row][col] === 2;
}

function dfs(grid, row, col) {
  if (isOffGrid(grid, row, col) || isWater(grid, row, col)) {
    return 1;
  }

  if (wasAlreadyVisited(grid, row, col)) {
    return 0;
  }

  grid[row][col] = 2;

  return (
    dfs(grid, row, col - 1) +
    dfs(grid, row, col + 1) +
    dfs(grid, row - 1, col) +
    dfs(grid, row + 1, col)
  );
}

function islandPerimeter(grid) {
  let perimeter = 0;

  for (let row = 0; row < grid.length; row++) {
    for (let col = 0; col < grid[row].length; col++) {
      if (isPartOfIsland(grid, row, col)) {
        perimeter += dfs(grid, row, col);
      }
    }
  }

  return perimeter;
}
