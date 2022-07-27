function minCostToMoveChips(positions) {
  let evenCount = 0;
  let oddCount = 0;

  for (let position of positions) {
    if (position % 2 === 0) evenCount++;
    else oddCount++;
  }

  return Math.min(evenCount, oddCount);
}
