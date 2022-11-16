function guessNumber(n) {
  let start = 1;
  let end = n;
  let middle = Math.round(n / 2);

  while (guess(middle)) {
    if (guess(middle) > 0) {
      start = middle + 1;
    } else {
      end = middle - 1;
    }

    middle = Math.round(end + start) / 2;
  }

  return middle;
}
