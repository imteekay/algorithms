// https://leetcode.com/problems/buy-two-chocolates

function buyChoco(prices, money) {
  let min1 = Infinity;
  let min2 = Infinity;

  for (let num of prices) {
    if (num < min1) {
      min2 = min1;
      min1 = num;
    } else if (num <= min2) {
      min2 = num;
    }
  }

  return money - min1 - min2 >= 0 ? money - min1 - min2 : money;
}
