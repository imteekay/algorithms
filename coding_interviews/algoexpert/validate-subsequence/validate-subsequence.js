function isValidSubsequence(array, sequence) {
  let p1 = 0;
  let p2 = 0;

  while (p1 < array.length && p2 < sequence.length) {
    if (array[p1] === sequence[p2]) {
      p1++;
      p2++;
    } else {
      p1++;
    }
  }

  return p2 === sequence.length;
}
