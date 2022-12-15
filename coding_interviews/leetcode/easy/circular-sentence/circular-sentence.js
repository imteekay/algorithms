function isCircularSentence(sentence) {
  const words = sentence.split(' ');
  const lastWord = words[words.length - 1];
  const lastCharEqualFirstChar = lastWord[lastWord.length - 1] === words[0][0];

  if (!lastCharEqualFirstChar) return false;

  for (let index = 0; index < words.length - 1; index++) {
    const firstWord = words[index];
    const nextWord = words[index + 1];
    if (firstWord[firstWord.length - 1] !== nextWord[0]) return false;
  }

  return true;
}
