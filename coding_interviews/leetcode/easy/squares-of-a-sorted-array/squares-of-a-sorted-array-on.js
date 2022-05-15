function buildArray(n) {
  const list = [];

  for (let i = 1; i <= n; i++) {
    list.push(0);
  }

  return list;
}

function sortedSquares(nums) {
  let sortedSquaresNumbers = buildArray(0);
  let leftIndex = 0;
  let rightIndex = nums.length - 1;
  let pointer = nums.length - 1;

  while (leftIndex <= rightIndex) {
    let left = nums[leftIndex];
    let right = nums[rightIndex];

    if (Math.abs(left) > Math.abs(right)) {
      sortedSquaresNumbers[pointer] = Math.pow(left, 2);
      leftIndex++;
    } else {
      sortedSquaresNumbers[pointer] = Math.pow(right, 2);
      rightIndex--;
    }

    pointer--;
  }

  return sortedSquaresNumbers;
}
