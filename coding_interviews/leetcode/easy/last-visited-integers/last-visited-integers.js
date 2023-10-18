// https://leetcode.com/problems/last-visited-integers

function getLastInteger(words, lastNumberIndex, consecutivePrevs) {
  for (let index = lastNumberIndex; index >= 0; index--) {
    while (words[index] === 'prev') {
      index--;
    }

    if (index < 0) {
      return -1;
    }

    if (consecutivePrevs === 0) {
      return words[index];
    }

    if (words[index] !== 'prev') {
      consecutivePrevs--;
    }
  }

  return -1;
}

function lastVisitedIntegers(words) {
  let result = [];
  let consecutivePrevs = 0;
  let lastNumberIndex;

  for (let index = 0; index < words.length; index++) {
    if (words[index] === 'prev') {
      result.push(getLastInteger(words, lastNumberIndex, consecutivePrevs));
      console.log('------');
      consecutivePrevs++;
    } else {
      lastNumberIndex = index;
      consecutivePrevs = 0;
    }
  }

  return result;
}
