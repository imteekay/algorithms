/**
- is it in the border: no closed island
- length == 1, 2: no closed island
- visited data structure: map
- iterate: [1,1] -> [n-1,n-1]
  - is it 0
  - go to top, bottom, left, right with a dfs fn
    - is it 0: go to top, bottom, left, right with recursive call to the dfs fn
*/
function generateVisitedKey(row, col) {
  return `${row}-${col}`;
}

function isInsideTheGrid(grid, row, col) {
  return row >= 0 && row < grid.length && col >= 0 && col < grid[0].length;
}

function dfs(grid, row, col, visited) {
  let key = generateVisitedKey(row, col);

  if (!isInsideTheGrid(grid, row, col)) {
    return false;
  }

  if (grid[row][col] === 1 || visited[key]) {
    return true;
  }

  if (grid[row][col] === 0 && !visited[key]) {
    visited[key] = true;

    let top = dfs(grid, row - 1, col, visited);
    let bottom = dfs(grid, row + 1, col, visited);
    let left = dfs(grid, row, col - 1, visited);
    let right = dfs(grid, row, col + 1, visited);

    return top && bottom && left && right;
  }
}

function closedIsland(grid) {
  if (grid.length <= 2 || grid[0].length <= 2) {
    return 0;
  }

  let visited = {};
  let closedIslandsNumber = 0;

  for (let row = 1; row < grid.length - 1; row++) {
    for (let col = 1; col < grid[row].length - 1; col++) {
      let cell = grid[row][col];
      let key = generateVisitedKey(row, col);

      if (cell === 0 && !visited[key]) {
        visited[key] = true;

        let top = dfs(grid, row - 1, col, visited);
        let bottom = dfs(grid, row + 1, col, visited);
        let left = dfs(grid, row, col - 1, visited);
        let right = dfs(grid, row, col + 1, visited);
        let isClosedIsland = top && bottom && left && right;

        if (isClosedIsland) {
          closedIslandsNumber++;
        }
      }
    }
  }

  return closedIslandsNumber;
}
