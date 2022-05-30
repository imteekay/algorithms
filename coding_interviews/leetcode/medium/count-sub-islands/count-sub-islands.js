function dfs(grid1, grid2, row, col) {
  if (
    row < 0 ||
    row >= grid2.length ||
    col < 0 ||
    col >= grid2[0].length ||
    grid2[row][col] == 0
  ) {
    return 1;
  }

  grid2[row][col] = 0;

  let numberOfSubIslands = 1;

  numberOfSubIslands &= dfs(grid1, grid2, row - 1, col);
  numberOfSubIslands &= dfs(grid1, grid2, row + 1, col);
  numberOfSubIslands &= dfs(grid1, grid2, row, col - 1);
  numberOfSubIslands &= dfs(grid1, grid2, row, col + 1);

  return numberOfSubIslands & grid1[row][col];
}

function countSubIslands(grid1, grid2) {
  let numberOfSubIslands = 0;

  for (let row = 0; row < grid2.length; row++) {
    for (let col = 0; col < grid2[row].length; col++) {
      if (grid2[row][col]) {
        numberOfSubIslands += dfs(grid1, grid2, row, col);
      }
    }
  }

  return numberOfSubIslands;
}
