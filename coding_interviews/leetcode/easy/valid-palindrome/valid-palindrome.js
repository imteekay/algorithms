const alphanumeric = 'abcdefghijklmnopqrstuvwxyz0123456789';

function downcase(string) {
  return string.toLowerCase();
}

function keepAlphanumeric(string) {
  let alphanumericOnlyString = [];

  for (let char of string) {
    if (alphanumeric.includes(char)) {
      alphanumericOnlyString.push(char);
    }
  }

  return alphanumericOnlyString.join('');
}

function isValidPalindrome(string) {
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

function isPalindrome(string) {
  return isValidPalindrome(keepAlphanumeric(downcase(string)));
}
