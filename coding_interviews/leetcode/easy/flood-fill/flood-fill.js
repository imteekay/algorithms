/**
- is it inside the grid?
- is it equal to the target value?
  - update the pixe with newColor
  - recursive call for: top, left, right, bottom
 */

function isInsideTheGrid(image, row, col) {
  const validRow = row >= 0 && row < image.length;
  const validCol = col >= 0 && col < image[0].length;
  return validRow && validCol;
}

function floodFillHelper(image, sr, sc, newColor, startingPixel, visited) {
  if (isInsideTheGrid(image, sr, sc)) {
    let currentPixel = image[sr][sc];

    if (currentPixel === startingPixel && !visited[sr][sc]) {
      image[sr][sc] = newColor;
      visited[sr][sc] = true;

      let topPosition = {
        row: sr - 1,
        col: sc,
      };

      let rightPosition = {
        row: sr,
        col: sc + 1,
      };

      let leftPosition = {
        row: sr,
        col: sc - 1,
      };

      let bottomPosition = {
        row: sr + 1,
        col: sc,
      };

      floodFillHelper(
        image,
        topPosition.row,
        topPosition.col,
        newColor,
        startingPixel,
        visited
      );

      floodFillHelper(
        image,
        rightPosition.row,
        rightPosition.col,
        newColor,
        startingPixel,
        visited
      );

      floodFillHelper(
        image,
        leftPosition.row,
        leftPosition.col,
        newColor,
        startingPixel,
        visited
      );

      floodFillHelper(
        image,
        bottomPosition.row,
        bottomPosition.col,
        newColor,
        startingPixel,
        visited
      );
    }
  }
}

function buildVisitedMatrix(image) {
  let matrix = [];

  for (let row = 0; row < image.length; row++) {
    let r = [];

    for (let col = 0; col < image[row].length; col++) {
      r.push(false);
    }

    matrix.push(r);
  }

  return matrix;
}

function floodFill(image, sr, sc, newColor) {
  let visited = buildVisitedMatrix(image);
  floodFillHelper(image, sr, sc, newColor, image[sr][sc], visited);
  return image;
}
