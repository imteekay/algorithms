function repeatedCharacter(s) {
  let counter = new Map();

  for (let char of s) {
    if (counter.has(char)) {
      return char;
    }

    counter.set(char, 1);
  }
}
