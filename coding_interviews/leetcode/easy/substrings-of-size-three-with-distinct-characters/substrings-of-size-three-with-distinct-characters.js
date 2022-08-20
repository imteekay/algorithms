function isGoodString(string) {
  let [char1, char2, char3] = string;
  return char1 !== char2 && char1 !== char3 && char2 !== char3;
}

function countGoodSubstrings(string) {
  let goodSubstringsCounter = 0;

  for (let index = 0; index < string.length - 2; index++) {
    const substring = string.slice(index, index + 3);

    if (isGoodString(substring)) {
      goodSubstringsCounter++;
    }
  }

  return goodSubstringsCounter;
}
