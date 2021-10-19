// https://leetcode.com/problems/length-of-last-word

const lengthOfLastWord = (s) => {
  const words = s.trim().split(' ');
  return words[words.length - 1].length;
};

const lengthOfLastWord = (s) => {
  let lastWordLength = 0;

  for (let i = s.length - 1; i >= 0; i--) {
    if (s[i] !== ' ') lastWordLength++;
    if (s[i] === ' ' && lastWordLength > 0) break;
  }

  return lastWordLength;
};
