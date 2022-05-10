function getTwoHaviest(stones) {
  const first = stones[0];
  const second = stones[1];

  let heaviest = first > second ? first : second;
  let secondHeaviest = first > second ? second : first;

  for (let i = 2; i < stones.length; i++) {
    const stone = stones[i];

    if (stone > heaviest) {
      secondHeaviest = heaviest;
      heaviest = stone;
      continue;
    }

    if (stone > secondHeaviest) {
      secondHeaviest = stone;
      continue;
    }
  }

  return { heaviest, secondHeaviest };
}

function removeStone(stones, stoneToBeRemoved) {
  for (let i = 0; i < stones.length; i++) {
    if (stones[i] === stoneToBeRemoved) {
      stones.splice(i, 1);
      return;
    }
  }
}

function updateStone(stones, stone, stoneWeight) {
  for (let i = 0; i < stones.length; i++) {
    if (stones[i] === stone) {
      stones[i] = stoneWeight;
      return;
    }
  }
}

export function lastStoneWeight(stones) {
  while (stones.length > 1) {
    const { heaviest, secondHeaviest } = getTwoHaviest(stones);

    if (heaviest === secondHeaviest) {
      removeStone(stones, heaviest);
      removeStone(stones, secondHeaviest);
    }

    if (heaviest !== secondHeaviest) {
      updateStone(stones, heaviest, heaviest - secondHeaviest);
      removeStone(stones, secondHeaviest);
    }
  }

  return stones[0] || 0;
}
