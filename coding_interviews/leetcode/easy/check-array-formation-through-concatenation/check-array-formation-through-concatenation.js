function buildMap(pieces) {
  let hashmap = new Map();

  for (let piece of pieces) {
    hashmap.set(piece[0], piece);
  }

  return hashmap;
}

function canFormArray(arr, pieces) {
  let index = 0;
  let hashmap = buildMap(pieces);
  let output = [];

  while (index < arr.length) {
    let num = arr[index];
    if (!hashmap.has(num)) return false;
    output = [...output, ...hashmap.get(num)];
    index += hashmap.get(num).length;
  }

  if (arr.length !== output.length) return false;

  for (let index = 0; index < arr.length; index++) {
    if (arr[index] !== output[index]) return false;
  }

  return true;
}
