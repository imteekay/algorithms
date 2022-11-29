function totalMoney(n) {
  let monday = 0;
  let previousDay = monday;
  let counter = monday;

  for (let index = 0; index < n; index++) {
    if (index % 7 === 0) {
      monday++;
      counter += monday;
      previousDay = monday;
    } else {
      previousDay++;
      counter += previousDay;
    }
  }

  return counter;
}
