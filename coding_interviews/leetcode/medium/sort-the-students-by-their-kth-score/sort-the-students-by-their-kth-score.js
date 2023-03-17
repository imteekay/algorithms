function sortTheStudents(score, k) {
  let column = [];
  let sortedScores = [];

  for (let row = 0; row < score.length; row++) {
    column.push([row, score[row][k]]);
  }

  column.sort((pair1, pair2) => pair2[1] - pair1[1]);

  for (let [row] of column) {
    sortedScores.push(score[row]);
  }

  return sortedScores;
}
