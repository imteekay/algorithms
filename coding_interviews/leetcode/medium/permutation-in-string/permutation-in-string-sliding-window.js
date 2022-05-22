function buildCharCount(string) {
  let charCount = {};

  for (let char of string) {
    if (charCount[char]) {
      charCount[char]++;
    } else {
      charCount[char] = 1;
    }
  }

  return charCount;
}

function isPermutation(possiblePermutation, string) {
  let charCount = buildCharCount(string);

  for (let char of possiblePermutation) {
    if (charCount[char]) {
      charCount[char]--;
    } else {
      return false;
    }
  }

  return true;
}

function checkInclusion(s1, s2) {
  for (let pointer1 = 0; pointer1 <= s2.length - s1.length; pointer1++) {
    let pointer2 = pointer1 + s1.length;
    let possiblePermutation = s2.substring(pointer1, pointer2);

    if (isPermutation(possiblePermutation, s1)) {
      return true;
    }
  }

  return false;
}
