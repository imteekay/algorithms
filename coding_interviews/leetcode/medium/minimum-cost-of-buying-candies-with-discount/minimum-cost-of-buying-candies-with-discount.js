// https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount

function sum(cost) {
  let sumOfAllCost = 0;

  for (let c of cost) {
    sumOfAllCost += c;
  }

  return sumOfAllCost;
}

function minimumCost(cost) {
  if (cost.length <= 2) return sum(cost);
  cost.sort((a, b) => a - b);

  let allCost = 0;
  let index;

  for (index = cost.length - 1; index > 1; index -= 3) {
    if (cost[index] <= cost[index - 2]) {
      allCost += cost[index - 1] + cost[index - 2];
    } else {
      allCost += cost[index] + cost[index - 1];
    }
  }

  allCost += sum(cost.slice(0, index + 1));

  return allCost;
}
