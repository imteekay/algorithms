const cumulativeSum = (arr, sum = 0) =>
  arr.map((number) => {
    sum += number;
    return sum;
  });

cumulativeSum([1, 3, 5, 7]);
