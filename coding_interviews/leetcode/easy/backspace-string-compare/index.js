function buildStack(string) {
  const stack = [];

  for (let index = 0; index < string.length; index++) {
    if (string[index] === '#') {
      stack.pop();
    } else {
      stack.push(string[index]);
    }
  }

  return stack;
}

function isEqual(stack1, stack2) {
  if (stack1.length !== stack2.length) {
    return false;
  }

  for (let index = 0; index < stack1.length; index++) {
    if (stack1[index] !== stack2[index]) {
      return false;
    }
  }

  return true;
}

export function backspaceCompare(s, t) {
  const sStack = buildStack(s);
  const tStack = buildStack(t);
  return isEqual(sStack, tStack);
}
