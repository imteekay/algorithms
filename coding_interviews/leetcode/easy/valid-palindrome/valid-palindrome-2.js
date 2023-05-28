function isPalindrome(s) {
  let string = s.toLowerCase().replace(/[^a-z0-9]/gi, '');
  let start = 0;
  let end = string.length - 1;

  while (start <= end) {
    if (string[start] !== string[end]) {
      return false;
    }

    start++;
    end--;
  }

  return true;
}
