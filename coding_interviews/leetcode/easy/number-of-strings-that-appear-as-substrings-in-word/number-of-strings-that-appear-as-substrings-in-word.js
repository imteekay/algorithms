const isPatternInWord = (pattern, word) => {
  const patternLength = pattern.length;
  let hasPattern = false;

  for (let i = 0; i + patternLength <= word.length; i++) {
    console.log(word.substring(i, i + patternLength));
    if (word.substring(i, i + patternLength) === pattern) {
      hasPattern = true;
    }
  }

  return hasPattern;
};

const numOfStrings = (patterns, word) => {
  let count = 0;

  patterns.forEach((pattern) => {
    if (isPatternInWord(pattern, word)) {
      count++;
    }
  });

  return count;
};

const result = numOfStrings(['a', 'abc', 'bc', 'd'], 'abc');
console.log('result', result);
