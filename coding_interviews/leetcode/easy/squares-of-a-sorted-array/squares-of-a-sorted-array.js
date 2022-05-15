function square(num) {
  return num * num;
}

function byIncreasingOrder(num1, num2) {
  return num1 - num2;
}

function sortedSquares(nums) {
  return nums.map(square).sort(byIncreasingOrder);
}
