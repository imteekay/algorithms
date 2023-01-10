function maxPower(string) {
  let power = 1;
  let max = 1;
  let currentChar = string[0];

  for (let index = 1; index < string.length; index++) {
    let char = string[index];

    if (char === currentChar) max++;
    if (char !== currentChar || index === string.length - 1) {
      currentChar = char;
      power = Math.max(max, power);
      max = 1;
    }
  }

  return power;
}
