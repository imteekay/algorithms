/*
nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
[1,2,2,3,5,6]

nums1 = [0,0,0], m = 0, nums2 = [1,2,3], n = 3
[1,2,3]

time: O(n + m)
space: O(n + m)
*/

function merge(nums1, m, nums2, n) {
  let pointer1 = 0;
  let pointer2 = 0;
  let numbers = [];
  let mIndex = m - 1;
  let nIndex = n - 1;

  while (pointer1 <= mIndex || pointer2 <= nIndex) {
    if (pointer1 <= mIndex && pointer2 <= nIndex) {
      let num1 = nums1[pointer1];
      let num2 = nums2[pointer2];

      if (num1 <= num2) {
        numbers.push(num1);
        pointer1++;
      } else {
        numbers.push(num2);
        pointer2++;
      }
    }

    if (pointer1 <= mIndex && pointer2 > nIndex) {
      numbers.push(nums1[pointer1]);
      pointer1++;
    }

    if (pointer2 <= nIndex && pointer1 > mIndex) {
      numbers.push(nums2[pointer2]);
      pointer2++;
    }
  }

  for (let [index, num] of numbers.entries()) {
    nums1[index] = num;
  }
}
