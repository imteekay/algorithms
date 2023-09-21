function reverseVowels(s) {
  const allVowels = [];
  const vowels = "aeiouAEIOU";

  for (let char of s) {
    if (vowels.includes(char)) allVowels.push(char);
  }

  const reversedVowels = [];

  for (
    let index = 0, vowelIndex = allVowels.length - 1;
    index < s.length;
    index++
  ) {
    if (vowels.includes(s[index])) {
      reversedVowels.push(allVowels[vowelIndex]);
      vowelIndex--;
    } else {
      reversedVowels.push(s[index]);
    }
  }

  return reversedVowels.join("");
}
