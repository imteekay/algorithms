export function removeOuterParentheses(string) {
  const stack = [];
  const result = [];

  for (let i = 0; i < string.length; i++) {
    const char = string[i];

    if (char === '(') {
      if (stack.length) {
        result.push(char);
      }

      stack.push(char);
    } else {
      if (stack.length > 1) {
        result.push(char);
      }

      stack.pop();
    }
  }

  return result.join('');
}
