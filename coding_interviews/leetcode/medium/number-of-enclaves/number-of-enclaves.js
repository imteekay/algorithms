/**
 - 0 => true
 - dfs => (top, bottom, left, right)
 - off the grid => false
 */
function getVisitedKey(row, col) {
  return `${row}-${col}`;
}

function isOffTheGrid(grid, row, col) {
  return row < 0 || col < 0 || row >= grid.length || col >= grid[0].length;
}

function dfs(grid, row, col, visited) {
  if (isOffTheGrid(grid, row, col)) {
    return -1;
  }

  if (grid[row][col] === 0) {
    return 0;
  }

  let key = getVisitedKey(row, col);

  if (visited[key]) {
    return 0;
  }

  visited[key] = true;

  let top = dfs(grid, row - 1, col, visited);
  let bottom = dfs(grid, row + 1, col, visited);
  let left = dfs(grid, row, col - 1, visited);
  let right = dfs(grid, row, col + 1, visited);

  return top === -1 || bottom === -1 || left === -1 || right === -1
    ? -1
    : 1 + top + bottom + left + right;
}

function numEnclaves(grid) {
  let numberOfLands = 0;
  let visited = {};

  for (let row = 0; row < grid.length; row++) {
    for (let col = 0; col < grid[row].length; col++) {
      let cell = grid[row][col];
      let key = getVisitedKey(row, col);

      if (cell && !visited[key]) {
        visited[key] = true;

        let top = dfs(grid, row - 1, col, visited);
        let bottom = dfs(grid, row + 1, col, visited);
        let left = dfs(grid, row, col - 1, visited);
        let right = dfs(grid, row, col + 1, visited);

        numberOfLands +=
          top === -1 || bottom === -1 || left === -1 || right === -1
            ? 0
            : 1 + top + bottom + left + right;
      }
    }
  }

  return numberOfLands;
}
