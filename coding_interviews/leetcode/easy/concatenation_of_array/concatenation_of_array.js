const getConcatenation = function (nums) {
  nums.forEach((num) => nums.push(num));
  return nums;
};

const getConcatenation = function (nums) {
  return [...nums, ...nums];
};
