/**
- getting all islands in grid2
  - store the rows and columns of each island
  - this can be stored in a list
    - e.g. [[[3,0]], [[4,1]], [2,1]]
- iterate through the list of islands of grid2
  - if all rows and cols from an island of grid2 match the cells in the grid1
    - increment the number of sub-islands
- return number of sub islands
*/
function isInsideTheGrid(grid, row, col) {
  return row >= 0 && row < grid.length && col >= 0 && col < grid[0].length;
}

function dfs(grid, row, col) {
  if (!isInsideTheGrid(grid, row, col)) {
    return [];
  }

  if (grid[row][col]) {
    grid[row][col] = 0;

    return [
      [row, col],
      ...dfs(grid, row - 1, col),
      ...dfs(grid, row + 1, col),
      ...dfs(grid, row, col - 1),
      ...dfs(grid, row, col + 1),
    ];
  }

  return [];
}

function countSubIslands(grid1, grid2) {
  let islands = [];

  for (let row = 0; row < grid2.length; row++) {
    for (let col = 0; col < grid2[row].length; col++) {
      let cell = grid2[row][col];

      if (cell) {
        grid2[row][col] = 0;

        let island = [
          [row, col],
          ...dfs(grid2, row - 1, col),
          ...dfs(grid2, row + 1, col),
          ...dfs(grid2, row, col - 1),
          ...dfs(grid2, row, col + 1),
        ];

        islands.push(island);
      }
    }
  }

  let numberOfSubIslands = 0;

  for (let island of islands) {
    let isSubIsland = true;

    for (let [row, col] of island) {
      if (grid1[row][col] === 0) {
        isSubIsland = false;
        break;
      }
    }

    if (isSubIsland) {
      numberOfSubIslands++;
    }
  }

  return numberOfSubIslands;
}
