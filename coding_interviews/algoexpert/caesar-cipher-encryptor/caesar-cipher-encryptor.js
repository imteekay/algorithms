// Runtime: O(N), N = number of characters
// Space: O(N)

function getChar(char, key) {
  let charCode = ((char.charCodeAt() - 97 + key) % 26) + 97;
  return String.fromCharCode(charCode);
}

function caesarCipherEncryptor(string, key) {
  return [...string].map((char) => getChar(char, key)).join('');
}
