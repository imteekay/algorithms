// /**
//  * Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.
//  *
//  * Note:
//  * The solution set must not contain duplicate triplets.
//  *
//  * Example:
//  * Given array nums = [-1, 0, 1, 2, -1, -4],
//  *
//  * A solution set is:
//  * [
//  *   [-1, 0, 1],
//  *   [-1, -1, 2]
//  * ]
//  */

const getTriplets = (nums) => {
  const triplets = [];
  const tripletMapper = {};
  const allNumbers = {};

  nums.forEach((num) => (allNumbers[num] = true));

  for (let i = 0; i < nums.length - 2; i++) {
    for (let j = i + 1; j < nums.length - 1; j++) {
      const firstTwoSum = nums[i] + nums[j];
      const targetNumber = 0 - firstTwoSum;

      if (allNumbers[targetNumber]) {
        const mapperKey = stringify([nums[i], nums[j], targetNumber]);
        if (!tripletMapper[mapperKey]) {
          tripletMapper[mapperKey] = true;
          triplets.push([nums[i], nums[j], targetNumber]);
        }
      }
    }
  }

  return triplets;
};

const stringify = (nums) => nums[0] + '.' + nums[1] + '.' + nums[2];

console.log(getTriplets([0, 0, 0]));
console.log(getTriplets([-1, 0, 1, 2, -1, -4]));
console.log(getTriplets([0, -1, 2]));
console.log(getTriplets([0, -1, Infinity]));
