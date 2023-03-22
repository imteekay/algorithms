function isEnglishLetter(char) {
  return (
    (char.charCodeAt() >= 65 && char.charCodeAt() <= 90) ||
    (char.charCodeAt() >= 97 && char.charCodeAt() <= 122)
  );
}

function reverseOnlyLetters(s) {
  const englishLetter = [];

  for (let char of s) {
    if (isEnglishLetter(char)) englishLetter.push(char);
  }

  let index = englishLetter.length - 1;
  let output = s.split('');

  for (let i = 0; i < s.length; i++) {
    if (isEnglishLetter(s[i])) {
      output[i] = englishLetter[index];
      index--;
    }
  }

  return output.join('');
}
