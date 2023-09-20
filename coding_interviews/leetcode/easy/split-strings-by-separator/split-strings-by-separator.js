// https://leetcode.com/problems/split-strings-by-separator

function splitWordsBySeparator(words, separator) {
  let output = [];

  for (let word of words) {
    let start = 0;

    for (let index = 0; index < word.length; index++) {
      if (word[index] === separator) {
        const str = word.slice(start, index);
        if (str.length) output.push(str);
        start = index + 1;
      } else if (index === word.length - 1) {
        output.push(word.slice(start, index + 1));
        start = index + 1;
      }
    }
  }

  return output;
}
