function twoSum(numbers, target) {
  let start = 0;
  let end = numbers.length - 1;
  let result = [];

  while (start < end) {
    let sum = numbers[start] + numbers[end];

    if (sum === target) {
      result.push(start + 1);
      result.push(end + 1);
      break;
    }

    if (sum > target) end--;
    else start++;
  }

  return result;
}
