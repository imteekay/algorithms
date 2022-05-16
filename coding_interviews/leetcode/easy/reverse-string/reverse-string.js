function reverseString(s) {
  let reversedString = [];

  for (let index = s.length - 1; index >= 0; index--) {
    reversedString.push(s[index]);
  }

  return reversedString;
}
