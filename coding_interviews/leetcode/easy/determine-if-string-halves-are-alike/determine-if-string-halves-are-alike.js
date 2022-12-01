const VOWELS = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'];

function getVowelsCount(string) {
  let count = 0;

  for (let char of string) {
    if (VOWELS.includes(char)) count++;
  }

  return count;
}

function halvesAreAlike(s) {
  let halfIndex = s.length / 2;
  let firstHalf = s.slice(0, halfIndex);
  let secondHalf = s.slice(halfIndex);
  let firstHalfVowelsCount = getVowelsCount(firstHalf);
  let secondHalfVowelsCount = getVowelsCount(secondHalf);

  return firstHalfVowelsCount === secondHalfVowelsCount;
}
