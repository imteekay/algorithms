// Runtime: O(NlogN)
// Space: O(1)

function getMinimumTotalSpeed(redShirtSpeeds, blueShirtSpeeds) {
  let sum = 0;

  for (let index = 0; index < redShirtSpeeds.length; index++) {
    sum += Math.max(redShirtSpeeds[index], blueShirtSpeeds[index]);
  }

  return sum;
}

function getMaximumTotalSpeed(redShirtSpeeds, blueShirtSpeeds) {
  let sum = 0;

  for (let index = 0; index < redShirtSpeeds.length; index++) {
    sum += Math.max(
      redShirtSpeeds[index],
      blueShirtSpeeds[blueShirtSpeeds.length - index - 1]
    );
  }

  return sum;
}

function tandemBicycle(redShirtSpeeds, blueShirtSpeeds, fastest) {
  redShirtSpeeds.sort((a, b) => a - b);
  blueShirtSpeeds.sort((a, b) => a - b);

  return fastest
    ? getMaximumTotalSpeed(redShirtSpeeds, blueShirtSpeeds)
    : getMinimumTotalSpeed(redShirtSpeeds, blueShirtSpeeds);
}
