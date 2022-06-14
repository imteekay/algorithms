/*
Given a sorted array of integers `arr` and an integer target,
find the index of the first and last position of target in `arr`.
In target can't be found in `arr`, return [-1, -1]
*/

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
