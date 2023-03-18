function transpose(matrix) {
  let newMatrix = [];

  for (let col = 0; col < matrix[0].length; col++) {
    let newRow = [];

    for (let row = 0; row < matrix.length; row++) {
      newRow.push(matrix[row][col]);
    }

    newMatrix.push(newRow);
  }

  return newMatrix;
}
