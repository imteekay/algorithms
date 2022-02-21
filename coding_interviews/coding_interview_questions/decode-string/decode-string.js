const isNum = (char) => !isNaN(Number(char));

export function decodeString(encodedString) {
  const stack = [];
  let index = 0;

  while (index < encodedString.length) {
    const char = encodedString[index];

    if (isNum(char)) {
      const number = [];

      while (isNum(encodedString[index])) {
        number.push(encodedString[index]);
        index++;
      }

      stack.push(Number(number));
      continue;
    }

    if (char === ']') {
      let str = '';

      while (stack[stack.length - 1] !== '[') {
        str = stack.pop() + str;
      }

      stack.pop();
      stack.push(str.repeat(stack.pop()));
      index++;
      continue;
    }

    stack.push(char);
    index++;
  }

  return stack.join('');
}
