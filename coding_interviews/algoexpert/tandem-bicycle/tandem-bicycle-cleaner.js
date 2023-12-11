// Runtime: O(NlogN)
// Space: O(1)

function getTotalSpeed(redShirtSpeeds, blueShirtSpeeds) {
  let sum = 0;

  for (let index = 0; index < redShirtSpeeds.length; index++) {
    sum += Math.max(redShirtSpeeds[index], blueShirtSpeeds[index]);
  }

  return sum;
}

function tandemBicycle(redShirtSpeeds, blueShirtSpeeds, fastest) {
  redShirtSpeeds.sort((a, b) => a - b);
  blueShirtSpeeds.sort((a, b) => (fastest ? b - a : a - b));

  return getTotalSpeed(redShirtSpeeds, blueShirtSpeeds);
}
