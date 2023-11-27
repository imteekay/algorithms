// Runtime: O(nlogn)
// Space: O(1)

function twoNumberSum(array, targetSum) {
  array.sort((a, b) => a - b);

  let left = 0;
  let right = array.length - 1;

  while (left < right) {
    let leftNumber = array[left];
    let rightNumber = array[right];

    if (leftNumber + rightNumber === targetSum) {
      return [leftNumber, rightNumber];
    }

    if (leftNumber + rightNumber > targetSum) {
      right--;
    } else {
      left++;
    }
  }

  return [];
}
