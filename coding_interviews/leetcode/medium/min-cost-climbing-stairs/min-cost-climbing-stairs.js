// https://leetcode.com/problems/min-cost-climbing-stairs

function getMinCost(stairs, index, dp) {
  if (index < 0) return 0;
  if (index === 0 || index === 1) return stairs[index];
  if (dp[index]) return dp[index];

  dp[index] =
    stairs[index] +
    Math.min(
      getMinCost(stairs, index - 1, dp),
      getMinCost(stairs, index - 2, dp)
    );

  return dp[index];
}

function minCostClimbingStairs(cost) {
  let dp = [];
  let minCostFirst = getMinCost(cost, cost.length - 1, dp);
  let minCostSecond = getMinCost(cost, cost.length - 2, dp);
  return Math.min(minCostFirst, minCostSecond);
}
