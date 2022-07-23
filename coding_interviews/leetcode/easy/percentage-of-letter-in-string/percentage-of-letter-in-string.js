function percentageLetter(s, letter) {
  let counter = new Map();

  for (let char of s) {
    if (counter.has(char)) {
      counter.set(char, counter.get(char) + 1);
    } else {
      counter.set(char, 1);
    }
  }

  let letterCount = counter.has(letter) ? counter.get(letter) : 0;

  return Math.floor((letterCount / s.length) * 100);
}
