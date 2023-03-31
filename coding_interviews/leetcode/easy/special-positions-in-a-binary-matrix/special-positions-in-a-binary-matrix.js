function countOnesInRow(matrix, row) {
  let ones = 0;

  for (let col = 0; col < matrix[row].length; col++) {
    if (matrix[row][col] === 1) ones++;
  }

  return ones;
}

function countOnesInCol(matrix, col) {
  let ones = 0;

  for (let row = 0; row < matrix.length; row++) {
    if (matrix[row][col] === 1) ones++;
  }

  return ones;
}

function numSpecial(matrix) {
  let specialPositions = 0;

  for (let row = 0; row < matrix.length; row++) {
    for (let col = 0; col < matrix[row].length; col++) {
      if (
        matrix[row][col] === 1 &&
        countOnesInRow(matrix, row) === 1 &&
        countOnesInCol(matrix, col) === 1
      ) {
        specialPositions++;
      }
    }
  }

  return specialPositions;
}
