function isPalindrome(s) {
  return s === s.split('').reverse().join('');
}

function removePalindromeSub(s) {
  return isPalindrome(s) ? 1 : 2;
}
