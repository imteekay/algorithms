function maxProfit(prices) {
  let max = 0;

  for (let index = 0; index < prices.length; index++) {
    for (
      let compareIndex = index + 1;
      compareIndex < prices.length;
      compareIndex++
    ) {
      max = Math.max(max, prices[compareIndex] - prices[index]);
    }
  }

  return max;
}
