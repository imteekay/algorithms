function setupMatrix(matrix) {
  const newMatrix = [];

  for (let row = 0; row < matrix.length; row++) {
    const newRow = [];

    for (let col = 0; col < matrix[row].length; col++) {
      newRow.push(matrix[row][col]);
    }

    newMatrix.push(newRow);
  }

  return newMatrix;
}

function rotateBorder(newMatrix, matrix, minRow, minCol, maxRow, maxCol) {
  if (minRow >= maxRow && minCol >= maxCol) {
    return;
  }

  // top
  let row = minRow;

  for (let col = minCol; col <= maxCol; col++) {
    const value = newMatrix[minRow][col];
    matrix[row][maxCol] = value;
    row++;
  }

  // right
  let col = maxCol;

  for (let row = minRow; row <= maxRow; row++) {
    const value = newMatrix[row][maxCol];
    matrix[maxRow][col] = value;
    col--;
  }

  // bottom
  row = minRow;

  for (let col = minCol; col <= maxCol; col++) {
    const value = newMatrix[maxRow][col];
    matrix[row][minCol] = value;
    row++;
  }

  // left
  col = maxCol;

  for (let row = minRow; row <= maxRow; row++) {
    const value = newMatrix[row][minCol];
    matrix[minRow][col] = value;
    col--;
  }

  rotateBorder(
    newMatrix,
    matrix,
    minRow + 1,
    minCol + 1,
    maxRow - 1,
    maxCol - 1
  );
}

function rotate(matrix) {
  const newMatrix = setupMatrix(matrix);
  const minRow = 0;
  const minCol = 0;
  const maxRow = matrix.length - 1;
  const maxCol = matrix[0].length - 1;

  rotateBorder(newMatrix, matrix, minRow, minCol, maxRow, maxCol);
}
