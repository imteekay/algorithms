function isDiagonalToeplitz(matrix, value, row, col) {
  if (row >= matrix.length || col >= matrix[row].length) return true;
  if (value !== matrix[row][col]) return false;
  return isDiagonalToeplitz(matrix, matrix[row][col], row + 1, col + 1);
}

function isToeplitzMatrix(matrix) {
  for (let row = 0; row < matrix.length - 1; row++) {
    for (let col = 0; col < matrix[row].length - 1; col++) {
      if (!isDiagonalToeplitz(matrix, matrix[row][col], row + 1, col + 1))
        return false;
    }
  }

  return true;
}
