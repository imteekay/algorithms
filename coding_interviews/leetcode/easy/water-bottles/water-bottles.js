function numWaterBottles(numBottles, numExchange) {
  let drinkNum = numBottles;

  while (numBottles >= numExchange) {
    let remainingBottles = numBottles % numExchange;
    let newBottles = Math.floor(numBottles / numExchange);
    drinkNum += newBottles;
    numBottles = remainingBottles + newBottles;
  }

  return drinkNum;
}
