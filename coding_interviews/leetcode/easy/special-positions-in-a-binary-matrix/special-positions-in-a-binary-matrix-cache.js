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
  let hashmapRow = new Map();
  let hashmapCol = new Map();

  for (let row = 0; row < matrix.length; row++) {
    for (let col = 0; col < matrix[row].length; col++) {
      let rowOnes = hashmapRow.has(row)
        ? hashmapRow.get(row)
        : countOnesInRow(matrix, row);

      hashmapRow.set(row, rowOnes);

      let colOnes = hashmapCol.has(col)
        ? hashmapCol.get(col)
        : countOnesInCol(matrix, col);

      hashmapCol.set(col, colOnes);

      if (matrix[row][col] === 1 && rowOnes === 1 && colOnes === 1) {
        specialPositions++;
      }
    }
  }

  return specialPositions;
}
