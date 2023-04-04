function isLexicographicallyLarger(keysPressed, keyPressedIndex, index) {
  return keysPressed[index] > keysPressed[keyPressedIndex];
}

function slowestKey(releaseTimes, keysPressed) {
  let longestDuration = releaseTimes[0];
  let previousRelease = releaseTimes[0];
  let keyPressedIndex = 0;

  for (let index = 1; index < releaseTimes.length; index++) {
    let currentRelease = releaseTimes[index];
    let currentDuration = currentRelease - previousRelease;

    if (currentDuration > longestDuration) {
      longestDuration = currentDuration;
      keyPressedIndex = index;
    }

    if (
      currentDuration === longestDuration &&
      isLexicographicallyLarger(keysPressed, keyPressedIndex, index)
    ) {
      longestDuration = currentDuration;
      keyPressedIndex = index;
    }

    previousRelease = currentRelease;
  }

  return keysPressed[keyPressedIndex];
}

function slowestKey(releaseTimes, keysPressed) {
  let longestDuration = releaseTimes[0];
  let previousRelease = releaseTimes[0];
  let keyPressedIndex = 0;

  for (let index = 1; index < releaseTimes.length; index++) {
    let currentRelease = releaseTimes[index];
    let currentDuration = currentRelease - previousRelease;

    if (
      currentDuration > longestDuration ||
      (currentDuration === longestDuration &&
        isLexicographicallyLarger(keysPressed, keyPressedIndex, index))
    ) {
      longestDuration = currentDuration;
      keyPressedIndex = index;
    }

    previousRelease = currentRelease;
  }

  return keysPressed[keyPressedIndex];
}
