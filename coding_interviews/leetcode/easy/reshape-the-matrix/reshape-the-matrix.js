function matrixReshape(mat, r, c) {
  if (mat.length * mat[0].length !== r * c) {
    return mat;
  }

  let reshapedMatrix = [];
  let reshapedMatrixRow = [];
  let index = 0;

  for (let row = 0; row < mat.length; row++) {
    for (let col = 0; col < mat[row].length; col++) {
      const num = mat[row][col];

      if (index < c) {
        reshapedMatrixRow.push(num);
      } else {
        reshapedMatrix.push(reshapedMatrixRow);
        reshapedMatrixRow = [num];
        index = 0;
      }

      index++;
    }
  }

  reshapedMatrix.push(reshapedMatrixRow);

  return reshapedMatrix;
}
