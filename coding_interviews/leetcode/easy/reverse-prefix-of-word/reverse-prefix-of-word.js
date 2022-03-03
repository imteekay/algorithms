function reverse(charsList) {
  const reversedCharsList = [];

  for (let i = charsList.length - 1; i >= 0; i--) {
    reversedCharsList.push(charsList[i]);
  }

  return reversedCharsList;
}

export function reversePrefix(word, char) {
  let charsList = [];
  let foundFirstOccurrence = false;

  for (let i = 0; i < word.length; i++) {
    const wordChar = word[i];
    charsList.push(wordChar);

    if (wordChar === char && !foundFirstOccurrence) {
      foundFirstOccurrence = true;
      charsList = reverse(charsList);
    }
  }

  return charsList.join('');
}
