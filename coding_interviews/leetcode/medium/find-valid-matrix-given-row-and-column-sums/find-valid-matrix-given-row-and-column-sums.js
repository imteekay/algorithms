function buildMatrix(rows, cols) {
  const matrix = [];

  for (let row = 0; row < rows; row++) {
    let matrixRow = [];

    for (let col = 0; col < cols; col++) {
      matrixRow.push(0);
    }

    matrix.push(matrixRow);
  }

  return matrix;
}

function restoreMatrix(rowSum, colSum) {
  const matrix = buildMatrix(rowSum.length, colSum.length);

  for (let row = 0; row < matrix.length; row++) {
    for (let col = 0; col < matrix[0].length; col++) {
      const min = Math.min(rowSum[row], colSum[col]);
      matrix[row][col] = min;
      rowSum[row] -= min;
      colSum[col] -= min;
    }
  }

  return matrix;
}
