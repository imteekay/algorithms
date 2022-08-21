function sortDistances(distances) {
  return [...distances].sort((distance1, distance2) => distance1 - distance2);
}

function allCellsDistOrder(rows, cols, rCenter, cCenter) {
  const distancesMap = new Map();
  const distances = [];

  for (let row = 0; row < rows; row++) {
    for (let col = 0; col < cols; col++) {
      const distance = Math.abs(row - rCenter) + Math.abs(col - cCenter);

      if (distancesMap.has(distance)) {
        distancesMap.set(distance, [...distancesMap.get(distance), [row, col]]);
      } else {
        distances.push(distance);
        distancesMap.set(distance, [[row, col]]);
      }
    }
  }

  return sortDistances(distances)
    .map((distance) => distancesMap.get(distance))
    .flatMap((cell) => cell);
}
