function updateRow(matrix, row, visited) {
  for (let col = 0; col < matrix[row].length; col++) {
    if (matrix[row][col]) {
      matrix[row][col] = 0;
      visited[`${row}-${col}`] = true;
    }
  }
}

function updateCol(matrix, col, visited) {
  for (let row = 0; row < matrix.length; row++) {
    if (matrix[row][col]) {
      matrix[row][col] = 0;
      visited[`${row}-${col}`] = true;
    }
  }
}

function setZeroes(matrix) {
  let visited = {};

  for (let row = 0; row < matrix.length; row++) {
    for (let col = 0; col < matrix[row].length; col++) {
      let cell = matrix[row][col];

      if (cell === 0 && !visited[`${row}-${col}`]) {
        if (!visited[`row-${row}`]) {
          updateRow(matrix, row, visited);
        }

        if (!visited[`col-${col}`]) {
          updateCol(matrix, col, visited);
        }

        visited[`row-${row}`] = true;
        visited[`col-${col}`] = true;
      }
    }
  }
}
