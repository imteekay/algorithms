export function decodeMessage(key, message) {
  let hashmap = new Map();
  let alphabet = 'abcdefghijklmnopqrstuvwxyz';
  let counter = 0;

  hashmap.set(' ', ' ');

  for (let char of key) {
    if (!hashmap.has(char)) {
      hashmap.set(char, alphabet[counter]);
      counter++;
    }
  }

  let result = [];

  for (let char of message) {
    result.push(hashmap.get(char));
  }

  return result.join('');
}
