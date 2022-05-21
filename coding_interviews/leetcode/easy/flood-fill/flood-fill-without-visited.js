function isInsideTheGrid(image, row, col) {
  const validRow = row >= 0 && row < image.length;
  const validCol = col >= 0 && col < image[0].length;
  return validRow && validCol;
}

function dfs(image, row, col, newColor, startingPixel) {
  if (isInsideTheGrid(image, row, col) && image[row][col] === startingPixel) {
    image[row][col] = newColor;
    dfs(image, row - 1, col, newColor, startingPixel);
    dfs(image, row, col + 1, newColor, startingPixel);
    dfs(image, row, col - 1, newColor, startingPixel);
    dfs(image, row + 1, col, newColor, startingPixel);
  }
}

function floodFill(image, row, col, newColor) {
  if (image[row][col] !== newColor) {
    dfs(image, row, col, newColor, image[row][col]);
  }

  return image;
}
