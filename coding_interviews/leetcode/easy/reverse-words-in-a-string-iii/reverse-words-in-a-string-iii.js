function reverseWords(s) {
  let reversedString = [];
  let splittedString = s.split(' ');

  for (let word of splittedString) {
    let reversedWord = [];

    for (let index = word.length - 1; index >= 0; index--) {
      reversedWord.push(word[index]);
    }

    reversedString.push(reversedWord.join(''));
  }

  return reversedString.join(' ');
}
