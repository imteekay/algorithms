/*
number of rows: 4
number of columns: 5

Print this:
1 8  9 16 17
2 7 10 15 18
3 6 11 14 19
4 5 12 13 20 
*/

function printSequence(rows, columns) {
  const matrix = [];

  for (let row = 0; row < rows; row++) {
    const matrixRow = [];

    for (let col = 0; col < columns; col++) {
      if (col % 2 === 0) {
        matrixRow.push(col * rows + 1 + row);
      } else {
        matrixRow.push((col + 1) * rows - row);
      }
    }

    matrix.push(matrixRow);
  }

  return matrix;
}

console.log(printSequence(4, 5));
console.log(printSequence(6, 6));
