function average(salaries) {
  let min = Infinity;
  let max = -Infinity;
  let sum = 0;

  for (let salary of salaries) {
    min = Math.min(min, salary);
    max = Math.max(max, salary);
    sum += salary;
  }

  sum -= min + max;
  return sum / (salaries.length - 2);
}
