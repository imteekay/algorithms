// https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter

const minTimeToType = (word) => {
  const wordLength = word.length;

  let currentIndex = 0;
  let moves = wordLength;

  for (let i = 0; i < wordLength; i++) {
    const letter = word[i];
    const charCode = letter.charCodeAt() - 97;
    const firstDistance = Math.abs(charCode - currentIndex);
    const secondDistance =
      charCode > currentIndex
        ? currentIndex + 26 - charCode
        : charCode + 26 - currentIndex;

    const minimumDistance = Math.min(firstDistance, secondDistance);

    moves += minimumDistance;
    currentIndex = charCode;
  }

  return moves;
};
