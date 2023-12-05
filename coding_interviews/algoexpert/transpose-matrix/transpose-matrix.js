// Runtime: O(R * C), R = rows and C = columns
// Space: O(N)

function transposeMatrix(matrix) {
  let transposedMatrix = [];

  for (let col = 0; col < matrix[0].length; col++) {
    let newRow = [];
    for (let row = 0; row < matrix.length; row++) {
      let cell = matrix[row][col];
      newRow.push(cell);
    }
    transposedMatrix.push(newRow);
  }

  return transposedMatrix;
}
