function firstDuplicateValue(array) {
  let map = new Map();

  for (let num of array) {
    map.set(num, map.get(num) + 1 || 1);

    if (map.get(num) > 1) {
      return num;
    }
  }

  return -1;
}
