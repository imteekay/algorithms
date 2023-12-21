// Runtime: O(N^2)
// Space: O(1)

function bubbleSort(array) {
  let sorted = false;

  while (!sorted) {
    sorted = true;
    for (let index = 0; index < array.length - 1; index++) {
      if (array[index] > array[index + 1]) {
        let aux = array[index];
        array[index] = array[index + 1];
        array[index + 1] = aux;
        sorted = false;
      }
    }
  }

  return array;
}
