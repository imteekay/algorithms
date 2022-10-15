function maxDistance(colors) {
  let startPointer = 0;
  let endPointer = colors.length - 1;
  let maximumDistance = -Infinity;

  while (endPointer > startPointer) {
    if (colors[startPointer] !== colors[endPointer]) {
      maximumDistance = endPointer - startPointer;
      break;
    }

    endPointer--;
  }

  endPointer = colors.length - 1;

  while (startPointer < endPointer) {
    if (
      colors[startPointer] !== colors[endPointer] &&
      endPointer - startPointer > maximumDistance
    ) {
      maximumDistance = endPointer - startPointer;
      break;
    }

    startPointer++;
  }

  return maximumDistance;
}
