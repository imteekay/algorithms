// https://leetcode.com/problems/execution-of-all-suffix-instructions-staying-in-a-grid

function isOffGrid(row, col, n) {
  return row < 0 || row >= n || col < 0 || col >= n;
}

function executeInstructions(n, startPos, s) {
  let answer = [];

  for (let index = 0; index < s.length; index++) {
    let instructionIndex = index;
    let instruction = s[instructionIndex];
    let row = startPos[0];
    let col = startPos[1];
    let numOfInstructions = 0;

    if (instruction === 'R') col++;
    if (instruction === 'L') col--;
    if (instruction === 'U') row--;
    if (instruction === 'D') row++;

    while (instructionIndex < s.length && !isOffGrid(row, col, n)) {
      instructionIndex++;
      instruction = s[instructionIndex];
      if (instruction === 'R') col++;
      if (instruction === 'L') col--;
      if (instruction === 'U') row--;
      if (instruction === 'D') row++;
      numOfInstructions++;
    }

    answer.push(numOfInstructions);
  }

  return answer;
}
