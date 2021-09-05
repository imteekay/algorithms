function diceTotalScore(a, b, c) {
  if (a === b && b === c) {
    return 1000 * a;
  }

  if (a === b) {
    return 500 * a;
  }

  if (a === c) {
    return 500 * a;
  }

  if (b === c) {
    return 500 * b;
  }

  return 100 * Math.min(a, b, c);
}
