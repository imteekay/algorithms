function isSubmatrixFull(numbers) {
  const answer = [];

  for (let i = 0; i < numbers[0].length - 2; i++) {
    const subMatrixNumbers = new Set();

    for (let row = 0; row < 3; row++) {
      for (let col = i; col < i + 3; col++) {
        subMatrixNumbers.add(numbers[row][col]);
      }
    }

    answer.push(subMatrixNumbers.size === 9);
  }

  return answer;
}
