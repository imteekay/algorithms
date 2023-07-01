function buildMap(string) {
  let map = new Map();

  for (let char of string) {
    if (map.has(char)) map.set(char, map.get(char) + 1);
    else map.set(char, 1);
  }

  return map;
}

function minSteps(s, t) {
  let sMap = buildMap(s);
  let tMap = buildMap(t);
  let minimumSteps = 0;

  for (let [char, count] of sMap.entries()) {
    if (!tMap.has(char)) {
      minimumSteps += count;
    } else if (count > tMap.get(char)) {
      minimumSteps += count - tMap.get(char);
    }
  }

  return minimumSteps;
}
