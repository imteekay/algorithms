export const transform = (scoreToLetters) => {
  const obj = {};

  Object.entries(scoreToLetters).forEach(([score, letters]) => {
    letters.forEach((letter) => {
      obj[letter.toLowerCase()] = Number(score);
    });
  });

  return obj;
};
