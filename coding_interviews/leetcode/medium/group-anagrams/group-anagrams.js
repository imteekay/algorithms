function sort(string) {
  return [...string].sort((c1, c2) => c1.localeCompare(c2)).join('');
}

function groupAnagrams(strs) {
  let hashmap = {};

  for (let string of strs) {
    let sortedString = sort(string);

    if (hashmap[sortedString]) {
      hashmap[sortedString].push(string);
    } else {
      hashmap[sortedString] = [string];
    }
  }

  return Object.values(hashmap);
}
