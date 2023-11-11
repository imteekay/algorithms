// https://leetcode.com/problems/find-champion-i

function findChampion(grid) {
  for (let i = 0; i < grid.length; i++) {
    let count = 0;

    for (let j = 0; j < grid[i].length; j++) {
      if (grid[i][j] === 1) {
        count++;
      }
    }

    if (count === grid.length - 1) {
      return i;
    }
  }
}
