// https://leetcode.com/problems/optimal-partition-of-string

function partitionString(s) {
  let partition = [];
  let substring = '';
  let substringMap = new Map();

  for (let index = 0; index < s.length; index++) {
    if (substringMap.has(s[index])) {
      partition.push(substring);
      substring = s[index];
      substringMap = new Map([[s[index], 1]]);
    } else {
      substring += s[index];
      substringMap.set(s[index], 1);
    }

    if (index === s.length - 1) {
      partition.push(substring);
    }
  }

  return partition.length;
}
