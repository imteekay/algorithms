function isValidRow(board, row) {
  let allNumbersInRow = new Set();
  let countOfNumbersInRow = 0;

  for (let index = 0; index <= 8; index++) {
    let num = board[row][index];

    if (num !== '.') {
      allNumbersInRow.add(num);
      countOfNumbersInRow++;
    }
  }

  return allNumbersInRow.size === countOfNumbersInRow;
}

function isValidCol(board, col) {
  let allNumbersInCol = new Set();
  let countOfNumbersInCol = 0;

  for (let index = 0; index <= 8; index++) {
    let num = board[index][col];

    if (num !== '.') {
      allNumbersInCol.add(num);
      countOfNumbersInCol++;
    }
  }

  return allNumbersInCol.size === countOfNumbersInCol;
}

function isValidSquare(board, row, col) {
  let allNumbersInSquare = new Set();
  let countOfNumbersInSquare = 0;

  for (let rowIndex = row; rowIndex <= row + 2; rowIndex++) {
    for (let colIndex = col; colIndex <= col + 2; colIndex++) {
      let num = board[rowIndex][colIndex];

      if (num !== '.') {
        allNumbersInSquare.add(num);
        countOfNumbersInSquare++;
      }
    }
  }

  return allNumbersInSquare.size === countOfNumbersInSquare;
}

function isValidSudoku(board) {
  let isValid = true;

  for (let row = 0; row <= 8; row++) {
    isValid = isValid && isValidRow(board, row);
  }

  for (let col = 0; col <= 8; col++) {
    isValid = isValid && isValidCol(board, col);
  }

  for (let col = 0; col <= 6; col += 3) {
    for (let row = 0; row <= 6; row += 3) {
      isValid = isValid && isValidSquare(board, row, col);
    }
  }

  return isValid;
}
