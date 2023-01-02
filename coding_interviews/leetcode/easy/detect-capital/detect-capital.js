function allCapitals(word) {
  return word === word.toUpperCase();
}

function allNotCapitals(word) {
  return word === word.toLowerCase();
}

function firstCapital(word) {
  return allCapitals(word[0]) && allNotCapitals(word.slice(1));
}

function detectCapitalUse(word) {
  return allCapitals(word) || allNotCapitals(word) || firstCapital(word);
}
