function generate(numRows) {
  let triangle = [[1]];

  for (let row = 1; row < numRows; row++) {
    let triangleRow = [];

    for (let index = 0; index <= row; index++) {
      const num1 = index - 1 >= 0 ? triangle[row - 1][index - 1] : 0;
      const num2 =
        index < triangle[row - 1].length ? triangle[row - 1][index] : 0;
      triangleRow.push(num1 + num2);
    }

    triangle.push(triangleRow);
  }

  return triangle;
}
