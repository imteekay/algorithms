// https://leetcode.com/problems/faulty-keyboard

function reverse(s) {
  let reversedS = [];

  for (let index = s.length - 1; index >= 0; index--) {
    reversedS.push(s[index]);
  }

  return reversedS;
}

function finalString(s) {
  let subS = [];

  for (let char of s) {
    if (char === 'i') subS = reverse(subS);
    else subS.push(char);
  }

  return subS.join('');
}
