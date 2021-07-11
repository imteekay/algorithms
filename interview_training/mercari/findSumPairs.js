let arr = [1, 5, 6, 1, 0, 1];

const findSumPairs = (arr, value) => {
  const lookup = {};
  const pairs = [];

  arr.forEach((number) => {
    const target = value - number;

    if (lookup[target]) {
      pairs.push([number, target]);
    }

    lookup[number] = true;
  });

  return pairs;
};

findSumPairs(arr, 6);
