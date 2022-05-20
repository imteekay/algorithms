function getMiddle(start, end) {
  return Math.floor((start + end) / 2);
}

function binarySearch(list, target) {
  let start = 0;
  let end = list.length - 1;
  let middle = getMiddle(start, end);

  while (start <= end) {
    if (list[middle] === target) {
      return true;
    } else if (list[middle] > target) {
      end = middle - 1;
      middle = getMiddle(start, end);
    } else {
      start = middle + 1;
      middle = getMiddle(start, end);
    }
  }

  return false;
}

function searchMatrix(matrix, target) {
  let targetRow;

  for (let rowIndex = 0; rowIndex < matrix.length; rowIndex++) {
    let rowFirstNum = matrix[rowIndex][0];
    let rowLastNum = matrix[rowIndex][matrix[rowIndex].length - 1];

    if (target >= rowFirstNum && target <= rowLastNum) {
      targetRow = rowIndex;
    }
  }

  return matrix[targetRow] ? binarySearch(matrix[targetRow], target) : false;
}
