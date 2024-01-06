// Runtime: O(N), N = array length
// Space: O(1)

function firstDuplicateValue(array) {
  for (let index = 0; index < array.length; index++) {
    let newIndex = Math.abs(array[index]) - 1;

    if (array[newIndex] < 0) {
      return Math.abs(array[index]);
    }

    array[newIndex] = array[newIndex] * -1;
  }

  return -1;
}
