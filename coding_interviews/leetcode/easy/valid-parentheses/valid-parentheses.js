function matches(openBracket, closingBracket) {
  return (
    {
      '}': '{',
      ']': '[',
      ')': '(',
    }[closingBracket] === openBracket
  );
}

function isValid(s) {
  if (s.length === 1) {
    return false;
  }

  const stack = [];

  for (let char of s) {
    if (['(', '{', '['].includes(char)) {
      stack.push(char);
    } else {
      let top = stack.pop();

      if (!matches(top, char)) {
        return false;
      }
    }
  }

  return stack.length === 0;
}
