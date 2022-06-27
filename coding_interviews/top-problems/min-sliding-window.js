function buildCharsCounter(s) {
  let charsCounter = {};

  for (let char of s) {
    if (charsCounter[char]) {
      charsCounter[char]++;
    } else {
      charsCounter[char] = 1;
    }
  }

  return charsCounter;
}

function compare(s1, s2) {
  let chars1 = buildCharsCounter(s1);
  let chars2 = buildCharsCounter(s2);

  for (let [char, counter] of Object.entries(chars1)) {
    if (chars2[char] == undefined || chars2[char] > counter) {
      return false;
    }
  }

  return true;
}

function minSlidingWindow(s, t) {
  for (let i = 0; i < s.length - t.length; i++) {
    for (let j = i + t.length; j < s.length; j++) {
      const substring = s.slice(i, j);
    }
  }
}

minSlidingWindow('adcfebeceabebadfcdfcbfcbead', 'abca');
