// Runtime: O(N), N = characters in the string
// Space: O(1)

function isPalindrome(string) {
  let start = 0;
  let end = string.length - 1;
  let middle = Math.floor((start + end) / 2);

  while (start <= middle && end >= middle) {
    if (string[start] !== string[end]) {
      return false;
    }

    start++;
    end--;
  }

  return true;
}
