function toggleCanCount(canCount) {
  return !canCount;
}

function countAsterisks(s) {
  let asteristics = 0;
  let canCount = true;

  for (let char of s) {
    if (canCount && char === '*') {
      asteristics++;
    }

    if (char === '|') {
      canCount = toggleCanCount(canCount);
    }
  }

  return asteristics;
}
