function sortChessSubsquares(numbers, queries) {
  queries.forEach(([x, y, w]) => {
    const blacks = [];
    const whites = [];

    for (let row = x; row < x + w; row++) {
      for (let col = y; col < y + w; col++) {
        if ((row + col) % 2 === 0) {
          blacks.push(numbers[row][col]);
        } else {
          whites.push(numbers[row][col]);
        }
      }
    }

    whites.sort((a, b) => a - b);
    blacks.sort((a, b) => a - b);

    let whiteCounter = 0;
    let blackCounter = 0;

    for (let row = x; row < x + w; row++) {
      for (let col = y; col < y + w; col++) {
        if ((row + col) % 2 === 0) {
          numbers[row][col] = blacks[blackCounter];
          blackCounter++;
        } else {
          numbers[row][col] = whites[whiteCounter];
          whiteCounter++;
        }
      }
    }
  });

  return numbers;
}
