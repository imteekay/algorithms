// https://leetcode.com/problems/find-greatest-common-divisor-of-array

const findSmallestAndLargest = (nums) => {
  let smallest = Infinity;
  let largest = -Infinity;

  for (let i = 0; i < nums.length; i++) {
    smallest = Math.min(smallest, nums[i]);
    largest = Math.max(largest, nums[i]);
  }

  return [smallest, largest];
};

const gcd = (num1, num2) => (num2 ? gcd(num2, num1 % num2) : num1);

const findGCD = (nums) => {
  const [smallest, largest] = findSmallestAndLargest(nums);
  return gcd(smallest, largest);
};
