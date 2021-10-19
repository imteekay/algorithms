// https://leetcode.com/problems/minimum-absolute-difference

const minimumAbsDifference = (arr) => {
  // runtime: O(NlogN)
  // space: O(N)

  let minDifference = Infinity;
  const differenceToPairs = {};

  arr.sort((a, b) => a - b);

  for (let i = 0; i < arr.length - 1; i++) {
    const num1 = arr[i];
    const num2 = arr[i + 1];
    const currentDifference = num2 - num1;

    if (differenceToPairs[currentDifference]) {
      differenceToPairs[currentDifference].push([num1, num2]);
    } else {
      differenceToPairs[currentDifference] = [[num1, num2]];
    }

    minDifference = Math.min(minDifference, currentDifference);
  }

  return differenceToPairs[minDifference];
};
