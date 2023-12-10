function classPhotos(redShirtHeights, blueShirtHeights) {
  redShirtHeights.sort((a, b) => a - b);
  blueShirtHeights.sort((a, b) => a - b);

  let backRow;
  let frontRow;

  if (redShirtHeights[0] < blueShirtHeights[0]) {
    backRow = blueShirtHeights;
    frontRow = redShirtHeights;
  } else {
    backRow = redShirtHeights;
    frontRow = blueShirtHeights;
  }

  for (let index = 0; index < backRow.length; index++) {
    if (frontRow[index] >= backRow[index]) return false;
  }

  return true;
}
