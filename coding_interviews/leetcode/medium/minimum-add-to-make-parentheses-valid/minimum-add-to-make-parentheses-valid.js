/*
"(" => 1
")" => 1
"()" => 0
"(()" => 1
"())" => 1
"(((" => 3
")))" => 3
")(" => 2 => "()(" => "()()"
"()))((" => 4
*/

function minAddToMakeValid(s) {
  let closeParenthesisCount = 0;
  let openParenthesisStack = [];

  for (let stringIndex = 0; stringIndex < s.length; stringIndex++) {
    const char = s[stringIndex];

    if (char === '(') {
      openParenthesisStack.push(char);
    } else {
      if (openParenthesisStack.length) {
        openParenthesisStack.pop();
      } else {
        closeParenthesisCount++;
      }
    }
  }

  return closeParenthesisCount + openParenthesisStack.length;
}
