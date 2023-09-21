// https://leetcode.com/problems/optimal-partition-of-string

function partitionString(s) {
  let substringMap = new Map([[s[0], 1]]);
  let count = 1;

  for (let index = 1; index < s.length; index++) {
    if (substringMap.has(s[index])) {
      substringMap = new Map([[s[index], 1]]);
      count++;
    } else {
      substringMap.set(s[index], 1);
    }
  }

  return count;
}
