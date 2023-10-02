// https://leetcode.com/problems/buy-two-chocolates

function buyChoco(prices, money) {
  prices.sort((a, b) => a - b);
  const first = prices[0];
  const second = prices[1];
  const diff = money - first - second;
  return diff >= 0 ? diff : money;
}
