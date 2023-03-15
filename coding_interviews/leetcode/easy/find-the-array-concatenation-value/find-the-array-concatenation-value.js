function concat(num1, num2) {
  return Number(num1.toString() + num2.toString());
}

function findTheArrayConcVal(nums) {
  let pointer1 = 0;
  let pointer2 = nums.length - 1;
  let output = 0;

  while (pointer1 <= pointer2) {
    if (pointer1 === pointer2) output += nums[pointer1];
    else output += concat(nums[pointer1], nums[pointer2]);
    pointer1++;
    pointer2--;
  }

  return output;
}
