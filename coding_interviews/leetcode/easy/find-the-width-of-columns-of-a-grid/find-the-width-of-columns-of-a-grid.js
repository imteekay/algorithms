// https://leetcode.com/problems/find-the-width-of-columns-of-a-grid

function findColumnWidth(grid) {
  let output = [];

  for (let col = 0; col < grid[0].length; col++) {
    let max = -Infinity;
    for (let row = 0; row < grid.length; row++) {
      let cell = grid[row][col];
      let length = cell.toString().length;
      max = Math.max(max, length);
    }
    output.push(max);
  }

  return output;
}
