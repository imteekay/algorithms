const VOWELS = ['a', 'e', 'i', 'o', 'u'];

function isVowelString(string) {
  return (
    VOWELS.includes(string[0]) && VOWELS.includes(string[string.length - 1])
  );
}

function vowelStrings(words, left, right) {
  let vowelsStrings = 0;

  for (let index = left; index <= right; index++) {
    if (isVowelString(words[index])) {
      vowelsStrings++;
    }
  }

  return vowelsStrings;
}
