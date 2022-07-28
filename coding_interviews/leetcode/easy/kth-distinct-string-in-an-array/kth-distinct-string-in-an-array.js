function kthDistinct(arr, k) {
  let count = 0;
  let hashmap = new Map();

  for (let string of arr) {
    if (hashmap.has(string)) {
      hashmap.set(string, hashmap.get(string) + 1);
    } else {
      hashmap.set(string, 1);
    }
  }

  let distinctStrings = [];

  hashmap.forEach((count, string) => {
    if (count === 1) {
      distinctStrings.push(string);
    }
  });

  for (let string of distinctStrings) {
    count++;
    if (count === k) return string;
  }

  return '';
}
