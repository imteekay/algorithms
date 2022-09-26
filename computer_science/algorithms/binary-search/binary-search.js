function getMiddle(start, end) {
  return Math.floor((start + end) / 2);
}

export function binarySearch(numbers, target) {
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
