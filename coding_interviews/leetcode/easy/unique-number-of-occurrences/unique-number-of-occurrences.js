function uniqueOccurrences(arr) {
  const hashmap = new Map();

  for (let num of arr) {
    if (hashmap.has(num)) {
      hashmap.set(num, hashmap.get(num) + 1);
    } else {
      hashmap.set(num, 1);
    }
  }

  const counts = [];

  hashmap.forEach((count, num) => {
    counts.push(count);
  });

  return counts.length === new Set(counts).size;
}
