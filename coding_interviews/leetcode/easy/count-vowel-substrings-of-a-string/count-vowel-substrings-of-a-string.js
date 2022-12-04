const VOWELS = ['a', 'e', 'i', 'o', 'u'];

function isVowel(char) {
  return VOWELS.includes(char);
}

function hasAllVowels(foundVowels) {
  return (
    foundVowels.has('a') &&
    foundVowels.has('e') &&
    foundVowels.has('i') &&
    foundVowels.has('o') &&
    foundVowels.has('u')
  );
}

function countVowelSubstrings(word) {
  let vowelSubstringCount = 0;

  for (let i = 0; i < word.length - 4; i++) {
    if (!isVowel(word[i])) continue;

    const foundVowels = new Map();
    foundVowels.set(word[i], 1);

    for (let index = i + 1; index < word.length; index++) {
      const char = word[index];
      if (!isVowel(char)) break;
      if (foundVowels.has(char))
        foundVowels.set(char, foundVowels.get(char) + 1);
      else foundVowels.set(char, 1);
      if (hasAllVowels(foundVowels)) vowelSubstringCount++;
    }
  }

  return vowelSubstringCount;
}
