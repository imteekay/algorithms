// Runtime: O(nlogn)
// Space: O(1)

function nonConstructibleChange(coins) {
  coins.sort((a, b) => a - b);

  let currentChangeCreated = 0;

  for (let coin of coins) {
    if (coin > currentChangeCreated + 1) {
      return currentChangeCreated + 1;
    }

    currentChangeCreated += coin;
  }

  return currentChangeCreated + 1;
}
