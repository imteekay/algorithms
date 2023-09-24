// https://leetcode.com/problems/second-largest-digit-in-a-string

function secondHighest(s) {
  let highest = -1;
  let secHighest = -1;

  for (let char of s) {
    let numChar = Number(char);
    let isInt = Number.isInteger(numChar);

    if (isInt && numChar > highest) {
      secHighest = highest;
      highest = numChar;
    } else if (isInt && numChar !== highest && numChar > secHighest) {
      secHighest = numChar;
    }
  }

  return highest === secHighest ? -1 : secHighest;
}
