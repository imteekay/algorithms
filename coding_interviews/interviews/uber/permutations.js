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

function combine(values1, values2) {
  let combination = [];

  for (let char1 of values1) {
    for (let char2 of values2) {
      combination.push(char1 + char2);
    }
  }

  return combination;
}

function permutations(numbers) {
  if (numbers.length === 0) {
    return [[], 0];
  }

  let allPermutations = [];
  let num1 = numbers[0];
  let values1 = numberToValues[num1];

  for (let char of values1) {
    allPermutations.push(char);
  }

  for (let j = 1; j < numbers.length; j++) {
    let num2 = numbers[j];
    let values2 = numberToValues[num2];
    allPermutations = combine(allPermutations, values2);
  }

  return allPermutations;
}

console.log(permutations([2, 3]));
console.log(permutations([2, 3, 4]));
console.log(permutations([1, 2, 3, 4]));
console.log(permutations([0, 1, 2, 3, 4]));
