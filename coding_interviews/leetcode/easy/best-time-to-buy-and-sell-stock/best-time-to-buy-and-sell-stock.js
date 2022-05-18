function maxProfit(prices) {
  let max = 0;
  let buy = 0;
  let sell = 1;

  while (sell < prices.length) {
    if (prices[buy] < prices[sell]) {
      let profit = prices[sell] - prices[buy];
      max = Math.max(max, profit);
    } else {
      buy = sell;
    }

    sell++;
  }

  return max;
}
