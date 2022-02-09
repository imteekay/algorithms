export function isPalindrome(word) {
  for (let i = 0; i < Math.floor(word.length / 2); i++) {
    if (word[i] !== word[word.length - 1 - i]) {
      return false;
    }
  }

  return true;
}

export function firstPalindrome(words) {
  let palindromicWord = '';

  for (let i = 0; i < words.length; i++) {
    if (isPalindrome(words[i])) {
      palindromicWord = words[i];
      break;
    }
  }

  return palindromicWord;
}
