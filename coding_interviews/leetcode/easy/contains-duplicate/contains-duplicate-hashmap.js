/*
nums = [1,2,3,4,4]
numToCounter = {
  1: 1,
  2: 1,
  3: 1,
  4: 2
}
*/

function containsDuplicate(nums) {
  let numToCounter = {};
  let appearsAtLeastTwice = false;

  for (let num of nums) {
    if (numToCounter[num]) {
      numToCounter[num]++;
    } else {
      numToCounter[num] = 1;
    }
  }

  Object.values(numToCounter).forEach((num) => {
    if (num >= 2) {
      appearsAtLeastTwice = true;
    }
  });

  return appearsAtLeastTwice;
}
