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
