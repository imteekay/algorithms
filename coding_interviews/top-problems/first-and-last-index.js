/*
Given a sorted array of integers `arr` and an integer target,
find the index of the first and last position of target in `arr`.
In target can't be found in `arr`, return [-1, -1]
*/

// Runtime: O(N)
// Space: O(1)

export function firstAndLastIndex(list, target) {
  let first = -1;
  let last = -1;

  for (let index = 0; index < list.length; index++) {
    if (list[index] === target) {
      first = index;
      break;
    }
  }

  for (let index = list.length; index >= 0; index--) {
    if (list[index] === target) {
      last = index;
      break;
    }
  }

  return [first, last];
}

// Runtime: O(logN)
// Space: O(1)

function getMiddle(start, end) {
  return Math.floor((start + end) / 2);
}

function findIndex(list, target, type) {
  let start = 0;
  let end = list.length - 1;
  let middle = getMiddle(start, end);
  let index = -1;

  while (start <= end) {
    if (target > list[middle]) {
      start = middle + 1;
      middle = getMiddle(start, end);
    }

    if (target < list[middle]) {
      end = middle - 1;
      middle = getMiddle(start, end);
    }

    if (target === list[middle]) {
      index = middle;

      if (type === 'findFirst') {
        end = middle - 1;
      }

      if (type === 'findLast') {
        start = middle + 1;
      }

      middle = getMiddle(start, end);
    }
  }

  return index;
}

function findFirstIndex(list, target) {
  return findIndex(list, target, 'findFirst');
}

function findLastIndex(list, target) {
  return findIndex(list, target, 'findLast');
}

export function firstAndLastIndexBinarySearch(list, target) {
  return [findFirstIndex(list, target), findLastIndex(list, target)];
}
