/**
abcadccb => abc / bcad / cad / adc / dc / c / cb
=> 4

"abcadccb"
 ^  ^

localCount = 0 -> 1 -> 2 -> 1 -> 2 -> 3;
maxCount = 0 -> 1 -> 2 -> 3;
set = ['b', 'c'] -> ['c', 'd', 'a'] -> ['c', 'd', 'a', 'b']
*/

function lengthOfLongestSubstring(s) {
  let leftPointer = 0;
  let maxCount = 0;
  let charToIndex = {};

  for (let rightPointer = 0; rightPointer < s.length; rightPointer++) {
    let num = s[rightPointer];
    let index = charToIndex[num];

    if (index == undefined) {
      maxCount = Math.max(maxCount, rightPointer - leftPointer + 1);
    } else {
      if (index >= leftPointer) {
        leftPointer = index + 1;
      } else {
        maxCount = Math.max(maxCount, rightPointer - leftPointer + 1);
      }
    }

    charToIndex[num] = rightPointer;
  }

  return maxCount;
}
