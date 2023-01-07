function isNice(substring, map) {
  for (let char of substring) {
    if (!map.has(char.toLowerCase()) || !map.has(char.toUpperCase())) {
      return false;
    }
  }

  return true;
}

function longestNiceSubstring(s) {
  let substring = '';

  for (let i = 0; i < s.length; i++) {
    let newSubstring = [s[i]];
    let map = new Map([[s[i], true]]);

    for (let j = i + 1; j < s.length; j++) {
      newSubstring.push(s[j]);
      map.set(s[j], true);

      if (isNice(newSubstring, map) && newSubstring.length > substring.length) {
        substring = newSubstring.join('');
      }
    }
  }

  return substring;
}
