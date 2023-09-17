// https://leetcode.com/problems/row-with-maximum-ones

function rowAndMaximumOnes(mat) {
  let rowIndex;
  let maxCountOfOnes = -Infinity;

  for (let row = 0; row < mat.length; row++) {
    let countOfOnes = 0;

    for (let num of mat[row]) {
      if (num === 1) {
        countOfOnes++;
      }
    }

    if (countOfOnes > maxCountOfOnes) {
      maxCountOfOnes = countOfOnes;
      rowIndex = row;
    }
  }

  return [rowIndex, maxCountOfOnes];
}
