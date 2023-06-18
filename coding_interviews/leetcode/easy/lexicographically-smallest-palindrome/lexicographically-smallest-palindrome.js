function makeSmallestPalindrome(string) {
  let start = 0;
  let end = string.length - 1;
  let palindrome = [];

  while (start <= end) {
    let charCode1 = string.charCodeAt(start);
    let charCode2 = string.charCodeAt(end);

    if (charCode1 <= charCode2) {
      palindrome[start] = string[start];
      palindrome[end] = string[start];
    }

    if (charCode2 < charCode1) {
      palindrome[start] = string[end];
      palindrome[end] = string[end];
    }

    start++;
    end--;
  }

  return palindrome.join('');
}
