let matrix = [];

for (let row = 1; row <= 4; row++) {
  let nums = [];
  let num = row + 1;

  for (let col = 1; col <= 5; col++) {
    nums.push(num);
    num += row + 1;
  }

  matrix.push(nums);
}

console.log(matrix);
