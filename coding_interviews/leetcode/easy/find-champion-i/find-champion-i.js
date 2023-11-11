// https://leetcode.com/problems/find-champion-i

function findChampion(grid) {
  let winners = new Map();

  for (let i = 0; i < grid.length; i++) {
    for (let j = 0; j < grid[i].length; j++) {
      if (grid[i][j] === 1) {
        winners.set(i, (winners.get(i) || 0) + 1);
      }
    }
  }

  for (let [key, value] of winners.entries()) {
    if (value === grid.length - 1) {
      return key;
    }
  }
}
