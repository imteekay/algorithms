function canPlaceFlowers(flowerbed, n) {
  let counter = 0;

  for (let index = 0; index < flowerbed.length; index++) {
    if (flowerbed[index] === 0) {
      let isLeftPlotEmpty = index === 0 || flowerbed[index - 1] === 0;
      let isRightPlotEmpty =
        index === flowerbed.length - 1 || flowerbed[index + 1] === 0;

      if (isLeftPlotEmpty && isRightPlotEmpty) {
        flowerbed[index] = 1;
        counter++;
      }
    }
  }

  return counter >= n;
}
