// https://leetcode.com/problems/maximum-sum-of-an-hourglass

function maxRowSum(grid, row, col) {
  return (
    grid[row][col] +
    grid[row][col + 1] +
    grid[row][col + 2] +
    grid[row + 1][col + 1] +
    grid[row + 2][col] +
    grid[row + 2][col + 1] +
    grid[row + 2][col + 2]
  );
}

function maxSum(grid) {
  let maxSumOfAnHourglass = 0;

  for (let row = 0; row + 2 < grid.length; row++) {
    for (let col = 0; col + 2 < grid[row].length; col++) {
      maxSumOfAnHourglass = Math.max(
        maxSumOfAnHourglass,
        maxRowSum(grid, row, col)
      );
    }
  }

  return maxSumOfAnHourglass;
}
