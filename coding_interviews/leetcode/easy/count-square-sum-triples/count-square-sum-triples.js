function countTriples(n) {
  let hashmap = new Map();
  let counter = 0;

  for (let num = 1; num <= n; num++) {
    hashmap.set(num * num, num);
  }

  for (let a = 1; a <= n; a++) {
    for (let b = 1; b <= n; b++) {
      const c = a * a + b * b;

      if (hashmap.has(c)) {
        counter++;
      }
    }
  }

  return counter;
}
