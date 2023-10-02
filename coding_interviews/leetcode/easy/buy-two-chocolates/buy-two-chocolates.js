// https://leetcode.com/problems/buy-two-chocolates

function buyChocolate(prices, money) {
  let price = Infinity;
  let priceIndex = 0;

  for (let index = 0; index < prices.length; index++) {
    if (prices[index] <= money && prices[index] < price) {
      price = prices[index];
      priceIndex = index;
    }
  }

  prices[priceIndex] = Infinity;
  return money - price;
}

function buyChoco(prices, money) {
  let restMoney = buyChocolate(prices, buyChocolate(prices, money));
  return restMoney >= 0 ? restMoney : money;
}
