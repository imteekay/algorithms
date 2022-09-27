export function twoCrystalBalls(breaks) {
  let jumpAmount = Math.floor(Math.sqrt(breaks.length));
  let index = jumpAmount;

  for (; index < breaks.length; index += jumpAmount) {
    if (breaks[index]) break;
  }

  index -= jumpAmount;

  for (let j = 0; j < jumpAmount && index < breaks.length; index++, j++) {
    if (breaks[index]) return index;
  }

  return -1;
}
