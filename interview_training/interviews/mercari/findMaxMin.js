const arr = [1, 2, 3, 4, 100];

const findMaxMin = (arr = []) => {
  let min = Infinity;
  let max = -Infinity;

  arr.forEach((number) => {
    if (number < min) min = number;
    if (number > max) max = number;
  });

  return {
    min,
    max,
  };
};

findMaxMin(arr);
