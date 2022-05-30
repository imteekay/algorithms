// building a hashmap to count numbers
let hashmap = {};
let numbers = [1, 2, 3, 4, 5, 1, 6, 1, 7, 0, 8, 9, 10, 0, 1];

for (let number of numbers) {
  if (hashmap[number]) {
    hashmap[number]++;
  } else {
    hashmap[number] = 1;
  }
}

console.log(hashmap);
