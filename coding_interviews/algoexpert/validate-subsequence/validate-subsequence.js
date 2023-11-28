// Runtime: O(n)
// Space: O(1)

function isValidSubsequence(array, sequence) {
  let p = 0;

  for (let index = 0; index < array.length; index++) {
    if (array[index] === sequence[p]) {
      p++;
    }

    if (p === sequence.length) {
      return true;
    }
  }

  return false;
}
