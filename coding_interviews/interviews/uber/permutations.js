/*
    Input [2,3]
    Output:  ["AD", "BD", "CD", "AE", "BE", "CE", "AF", "BF", "CF"], 9

    Input []
    Output: [], 0
    
    Input [1,2]
    Output: ["A", "B", "C"], 3
    
    Input [0,2]
    Output: ["+A", "+B", "+C"], 3
    
    Input [2,3,4]
    Output: ["ADG", "ADH", "ADI", "AEG", ...]
*/
let numberToValues = {
  0: '+',
  1: ' ',
  2: 'ABC',
  3: 'DEF',
  4: 'GHI',
  5: 'JKL',
  6: 'MNO',
  7: 'PQRS',
  8: 'TUV',
  9: 'WXYZ',
};

function combine(permutations, chars) {
  let combination = [];

  for (let permutation of permutations) {
    for (let char of chars) {
      combination.push(permutation + char);
    }
  }

  return combination;
}

function permutations(numbers) {
  if (numbers.length === 0) {
    return [];
  }

  let allPermutations = [];
  let num = numbers[0];
  let chars = numberToValues[num];

  for (let char of chars) {
    allPermutations.push(char);
  }

  for (let index = 1; index < numbers.length; index++) {
    let num = numbers[index];
    let chars = numberToValues[num];
    allPermutations = combine(allPermutations, chars);
  }

  return allPermutations;
}

console.log(permutations([2, 3]));
console.log(permutations([2, 3, 4]));
console.log(permutations([1, 2, 3, 4]));
console.log(permutations([0, 1, 2, 3, 4]));
