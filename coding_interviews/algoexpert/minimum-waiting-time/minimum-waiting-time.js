function minimumWaitingTime(queries) {
  let waitingTime = 0;
  let previous = 0;

  queries.sort((a, b) => a - b);

  for (let query of queries) {
    waitingTime += previous;
    previous += query;
  }

  return waitingTime;
}
