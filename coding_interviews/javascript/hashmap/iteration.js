let hashmap = {};
let numbers = [1, 2, 3, 4, 5, 1, 6, 1, 7, 0, 8, 9, 10, 0, 1];

for (let number of numbers) {
  if (hashmap[number]) {
    hashmap[number]++;
  } else {
    hashmap[number] = 1;
  }
}

// if I need keys and values
Object.entries(hashmap).forEach(([key, value]) => {
  console.log(`${key} -> ${value}`);
});

// if I need keys only
Object.keys(hashmap).forEach((key) => {
  console.log(key);
});

// if I need values only
Object.values(hashmap).forEach((value) => {
  console.log(value);
});
