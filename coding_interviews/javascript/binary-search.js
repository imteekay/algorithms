function getMiddle(start, end) {
  return Math.floor((start + end) / 2);
}

function binarySearch(numbers, target) {
  let start = 0;
  let end = numbers.length - 1;
  let middle = getMiddle(start, end);
  let found = false;

  while (start <= end && !found) {
    middle = getMiddle(start, end);
    const middleNumber = numbers[middle];

    if (middleNumber === target) found = true;
    if (middleNumber > target) end = middle - 1;
    if (middleNumber < target) start = middle + 1;
  }

  return found;
}

function logResult(list, target) {
  console.log(binarySearch(list, target));
}

logResult([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 5); // true
logResult([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 11); // false
logResult([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], -1); // false
logResult([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 0); // false
logResult([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 9); // true
logResult([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 1); // true
