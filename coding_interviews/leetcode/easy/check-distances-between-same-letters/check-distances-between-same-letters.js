function getDistanceIndex(char) {
  return char.charCodeAt() - 97;
}

function checkDistances(string, distance) {
  const hashmap = new Map();

  for (let index = 0; index < string.length; index++) {
    const char = string[index];

    if (hashmap.has(char)) {
      const distanceIndex = getDistanceIndex(char);
      const charDistance = distance[distanceIndex];
      const previousIndex = hashmap.get(char);
      if (index - previousIndex - 1 !== charDistance) return false;
    } else {
      hashmap.set(char, index);
    }
  }

  return true;
}
