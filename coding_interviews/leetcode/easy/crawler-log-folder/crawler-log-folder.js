function minOperations(logs) {
  let fileLevel = 0;

  for (let log of logs) {
    if (log === '../' && fileLevel) fileLevel--;
    else if (log === '../') {
    } else if (log === './') {
    } else fileLevel++;
  }

  return Math.abs(fileLevel);
}
