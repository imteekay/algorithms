function greatestLetter(string) {
  let greatest = [-Infinity, ''];
  let charsToCode = new Map();

  for (let char of string) {
    let lowerCasedChar = char.toLowerCase();
    let charCode = char.charCodeAt();

    if (
      charsToCode.has(lowerCasedChar) &&
      charsToCode.get(lowerCasedChar) !== charCode
    ) {
      const greaterCharCode = Math.max(
        charCode,
        charsToCode.get(lowerCasedChar)
      );
      greatest =
        greaterCharCode > greatest[0]
          ? [greaterCharCode, char.toUpperCase()]
          : greatest;
    } else if (!charsToCode.has(lowerCasedChar)) {
      charsToCode.set(lowerCasedChar, charCode);
    }
  }

  return greatest[1];
}
