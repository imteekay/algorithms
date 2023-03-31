function sum(nums) {
  let sumOfNums = 0;

  for (let num of nums) {
    sumOfNums += num;
  }

  return sumOfNums;
}

function buildMap(bobSizes) {
  let hashmap = new Map();

  for (let bobSize of bobSizes) {
    hashmap.set(bobSize, bobSize);
  }

  return hashmap;
}

function fairCandySwap(aliceSizes, bobSizes) {
  let aliceCandies = sum(aliceSizes);
  let bobCandies = sum(bobSizes);
  let hashmap = buildMap(bobSizes);

  for (let aliceSize of aliceSizes) {
    let bobCandy = (bobCandies + 2 * aliceSize - aliceCandies) / 2;
    if (hashmap.has(bobCandy)) {
      return [aliceSize, bobCandy];
    }
  }
}
