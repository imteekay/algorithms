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
  let char = s1[0];
  let charIndices = [];

  for (let index = 0; index < s2.length; index++) {
    if (s2[index] === char) {
      charIndices.push(index);
    }
  }

  let possiblePermutations = [];

  for (let index of charIndices) {
    for (let pointer = 1; pointer <= s1.length; pointer++) {
      let startIndex = index - s1.length + pointer;
      let endIndex = index + pointer;
      let substring = s2.substring(startIndex, endIndex);

      if (substring.length === s1.length) {
        possiblePermutations.push(substring);
      }
    }
  }

  for (let possiblePermutation of possiblePermutations) {
    if (isPermutation(possiblePermutation, s1)) {
      return true;
    }
  }

  return false;
}
