// console.log('Hello world');

// I would like you to write a function which takes two arguments: a list of words, each separated by comma, and a list of letters. The function should output the longest words from which can be made using the letters in the list.

// ---------
// Inputs
// ---------
// Words: aab,cab,abba,abacus,scabs,scab,bacca,ab
// Letters: aabbscb
// aab, cab, abba

// ----------------------
// Expected Output
// ----------------------
// abba, scab

// Algorithm Analysis
// O(L + W * CW) => O(W * CW)
// L = letters
// W = words
// CW = chars of word

function buildCounter(letters) {
  let lettersCounter = {};

  for (let char of letters) {
    if (lettersCounter[char]) {
      lettersCounter[char]++;
    } else {
      lettersCounter[char] = 1;
    }
  }

  return lettersCounter;
}

function getLongestWords(words, letters) {
  let lettersCounter = buildCounter(letters);
  let longestLength = 0;
  let allValidWords = {};

  for (let word of words) {
    let lettersCounterCopy = { ...lettersCounter }; // O(L)
    let isValid = true;

    for (let char of word) {
      if (
        lettersCounterCopy[char] == undefined ||
        lettersCounterCopy[char] === 0
      ) {
        isValid = false;
        break;
      }

      lettersCounterCopy[char] -= 1;
    }

    if (isValid) {
      if (allValidWords[word.length]) {
        allValidWords[word.length].push(word);
      } else {
        allValidWords[word.length] = [word];
      }

      longestLength = Math.max(longestLength, word.length);
    }
  }

  return allValidWords[longestLength] || [];
}

console.log(
  getLongestWords(
    ['aab', 'cab', 'abba', 'abacus', 'scabs', 'scab', 'bacca', 'ab'],
    'aabbscb'
  )
);
console.log(
  getLongestWords(
    ['aab', 'cab', 'abba', 'abacus', 'scabs', 'scab', 'bacca', 'ab'],
    ''
  )
);
console.log(
  getLongestWords(
    ['aab', 'cab', 'abba', 'abacus', 'scabs', 'scab', 'bacca', 'ab'],
    'aabbscbsu'
  )
);
console.log(
  getLongestWords(
    ['aab', 'cab', 'abba', 'abacus', 'scabs', 'scab', 'bacca', 'ab'],
    'aabbscbs'
  )
);
console.log(getLongestWords([''], 'batata'));
console.log(getLongestWords(['batata'], 'batata'));
console.log(getLongestWords(['aaaaaaaaaaaaaa'], 'aaaaaaaaaaaaaa'));
