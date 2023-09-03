function numberOfEmployeesWhoMetTarget(hours, target) {
  let count = 0;

  for (let hour of hours) {
    if (hour >= target) count++;
  }

  return count;
}
