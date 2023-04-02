function toCode(char) {
  return char.charCodeAt() - 97;
}

function buildDiffIntegerArray(word) {
  let diffIntegerArray = [];
  let previous = word[0];

  for (let index = 1; index < word.length; index++) {
    let current = word[index];
    diffIntegerArray.push(toCode(current) - toCode(previous));
    previous = current;
  }

  return diffIntegerArray;
}

function joinIntegersString(diff) {
  return diff.map((diffNum) => diffNum.toString()).join('*');
}

function oddString(words) {
  let hashmap = new Map();

  for (let word of words) {
    let key = joinIntegersString(buildDiffIntegerArray(word));

    if (hashmap.has(key)) {
      hashmap.set(key, [hashmap.get(key)[0] + 1, word]);
    } else {
      hashmap.set(key, [1, word]);
    }
  }

  for (let [_, [count, word]] of hashmap.entries()) {
    if (count === 1) {
      return word;
    }
  }
}
