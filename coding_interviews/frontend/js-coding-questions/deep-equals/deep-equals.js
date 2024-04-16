function deepEquals(valueOne, valueTwo) {
  const hasSameType = typeof valueOne === typeof valueTwo;
  const areEqual = valueOne === valueTwo;
  const areNaN = Number.isNaN(valueOne) && Number.isNaN(valueTwo);

  if (hasSameType && (areEqual || areNaN)) {
    return true;
  }

  if (
    valueOne === null ||
    valueTwo === null ||
    valueOne === undefined ||
    valueTwo === undefined ||
    (hasSameType && !areEqual)
  ) {
    return false;
  }

  if (Array.isArray(valueOne) && Array.isArray(valueTwo)) {
    if (valueOne.length !== valueTwo.length) {
      return false;
    }

    for (let index = 0; index < valueOne.length; index++) {
      if (!deepEquals(valueOne[index], valueTwo[index])) {
        return false;
      }
    }

    return true;
  }

  for (let key of Object.keys(valueOne)) {
    if (
      !(
        valueTwo.hasOwnProperty(key) && deepEquals(valueOne[key], valueTwo[key])
      )
    ) {
      return false;
    }
  }

  for (let key of Object.keys(valueTwo)) {
    if (
      !(
        valueOne.hasOwnProperty(key) && deepEquals(valueOne[key], valueTwo[key])
      )
    ) {
      return false;
    }
  }

  return true;
}

console.log(deepEquals(null, [1])); // false
console.log(deepEquals([1], null)); // false
console.log(deepEquals(undefined, [1])); // false
console.log(deepEquals([1], undefined)); // false
console.log(deepEquals([0], [1])); // false
console.log(deepEquals([0, 1, 2], [4, 5, 6])); // false
console.log(deepEquals([0, 'abc', 2], [0, 'abc', '2'])); // false
console.log(deepEquals([0, 'abc', '2'], [0, 'abc', 2])); // false
console.log(deepEquals([null, null, true], [null, undefined, true])); // false
console.log(deepEquals([null, undefined, true], [null, null, true])); // false
console.log(deepEquals({}, {})); // true
console.log(deepEquals({ a: 123 }, { a: '123' })); // false
console.log(deepEquals({ 1: 1, 2: 2, 3: 3 }, { 1: 1, 2: 2, 3: 3 })); // true
console.log(deepEquals({ 1: 1, 2: 2, 3: 3 }, { 2: 2, 1: 1, 3: 3 })); // true
