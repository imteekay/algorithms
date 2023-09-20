// https://leetcode.com/problems/projection-area-of-3d-shapes

function projectionArea(grid) {
  let xy = 0;
  let xz = 0;
  let yz = 0;

  for (let x = 0; x < grid.length; x++) {
    for (let y = 0; y < grid[x].length; y++) {
      if (grid[x][y] > 0) xy++;
    }
  }

  for (let x = 0; x < grid.length; x++) {
    let max = -Infinity;

    for (let z = 0; z < grid[x].length; z++) {
      max = Math.max(max, grid[x][z]);
    }

    xz += max;
  }

  let allAreas = [];

  for (let y = 0; y < grid.length; y++) {
    for (let z = 0; z < grid[y].length; z++) {
      allAreas[z] = Math.max(allAreas[z] || 0, grid[y][z]);
    }
  }

  yz = allAreas.reduce((sum, area) => sum + area, 0);

  return xy + xz + yz;
}
