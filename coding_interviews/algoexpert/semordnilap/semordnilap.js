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
