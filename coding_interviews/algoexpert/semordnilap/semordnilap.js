/**
Write a function that takes in a list of unique strings
and returns a list of semordnilap pairs.

A semordnilap pair is defined as a set of different strings
where the reverse of one word is the same as the forward version
of the other. For example the words "diaper" and "repaid" are a
semordnilap pair, as are the words "palindromes" and "semordnilap".

The order of the returned pairs and the order of the strings
within each pair does not matter.
*/

// Runtime: O(N * M), N = number of words, M = length o largest word
// Space: O(N)

function reverse(word) {
  let reversedWord = [];

  for (let index = word.length - 1; index >= 0; index--) {
    reversedWord.push(word[index]);
  }

  return reversedWord.join('');
}

function semordnilap(words) {
  let pairs = [];
  let map = new Map();

  for (let word of words) {
    if (map.has(word)) {
      pairs.push([word, map.get(word)]);
    } else {
      map.set(reverse(word), word);
    }
  }

  return pairs;
}
