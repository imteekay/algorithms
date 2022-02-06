export function reverseString(s) {
  const arraysOfChars = [];

  for (let index = s.length - 1; index >= 0; index--) {
    arraysOfChars.push(s[index]);
  }

  return arraysOfChars.join('');
}
