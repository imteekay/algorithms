// Runtime: O(N^2)
// Space: O(1)

function swap(array, i, j) {
  let aux = array[i];
  array[i] = array[j];
  array[j] = aux;
}

function insertionSort(array) {
  for (let index = 0; index < array.length; index++) {
    let toSwapIndex = index;
    while (toSwapIndex > 0 && array[toSwapIndex] < array[toSwapIndex - 1]) {
      swap(array, toSwapIndex, toSwapIndex - 1);
      toSwapIndex -= 1;
    }
  }

  return array;
}
