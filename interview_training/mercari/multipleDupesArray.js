const arr = [1, 1, 2, 3, 4, 5, 6, 7, 8, 6, 6, 7, 7, 7, 10, 10];

const multipleDupesArray = (arr) => {
  const counter = {};
  const duplicates = [];

  arr.forEach((number) => {
    if (number in counter) counter[number]++;
    else counter[number] = 1;
  });

  Object.entries(counter).forEach(([number, count]) => {
    if (count > 1) duplicates.push(number);
  });

  return duplicates;
};

multipleDupesArray(arr);
