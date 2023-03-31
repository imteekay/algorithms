function sum(nums) {
  let sumOfNums = 0;

  for (let num of nums) {
    sumOfNums += num;
  }

  return sumOfNums;
}

function fairCandySwap(aliceSizes, bobSizes) {
  let aliceCandies = sum(aliceSizes);
  let bobCandies = sum(bobSizes);

  for (let i = 0; i < aliceSizes.length; i++) {
    for (let j = 0; j < bobSizes.length; j++) {
      let aliceCandy = aliceSizes[i];
      let bobCandy = bobSizes[j];

      if (
        aliceCandies - aliceCandy + bobCandy ===
        bobCandies - bobCandy + aliceCandy
      ) {
        return [aliceCandy, bobCandy];
      }
    }
  }
}
