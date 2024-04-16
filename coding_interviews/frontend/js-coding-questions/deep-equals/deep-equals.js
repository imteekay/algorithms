// https://www.algoexpert.io/frontend/coding-questions/deep-equals

/**
 * Possible type
 * - number
 * - string
 * - boolean
 * - null
 * - undefined
 * - NaN
 * - object
 *  - can have all primitive values
 *  - can have arrays
 *  - can have nested objects
 * - array
 *  - can have all primitive values
 *  - can have nested arrays
 *  - can have objects
 */

function isObject(value) {
  return (
    typeof value === 'object' &&
    ![null, undefined].includes(value) &&
    !Array.isArray(value)
  );
}

function deepEquals(valueOne, valueTwo) {
  const hasSameType =
    typeof valueOne === typeof valueTwo ||
    (Array.isArray(valueOne) && isObject(valueTwo)) ||
    (Array.isArray(valueTwo) && isObject(valueOne)) ||
    (Array.isArray(valueOne) && valueTwo === null) ||
    (Array.isArray(valueTwo) && valueOne === null) ||
    (Array.isArray(valueOne) && valueTwo === undefined) ||
    (Array.isArray(valueTwo) && valueOne === undefined) ||
    (isObject(valueOne) && valueTwo === null) ||
    (isObject(valueTwo) && valueOne === null) ||
    (isObject(valueOne) && valueTwo === undefined) ||
    (isObject(valueTwo) && valueOne === undefined);

  const areEqual = valueOne === valueTwo;
  const areNaN = Number.isNaN(valueOne) && Number.isNaN(valueTwo);

  // Handle different types
  if (!hasSameType) {
    return false;
  }

  // Handle arrays
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

  // Handle objects
  if (isObject(valueOne) && isObject(valueTwo)) {
    for (let key of Object.keys(valueOne)) {
      if (
        !(
          valueTwo.hasOwnProperty(key) &&
          deepEquals(valueOne[key], valueTwo[key])
        )
      ) {
        return false;
      }
    }

    for (let key of Object.keys(valueTwo)) {
      if (
        !(
          valueOne.hasOwnProperty(key) &&
          deepEquals(valueOne[key], valueTwo[key])
        )
      ) {
        return false;
      }
    }

    return true;
  }

  return areEqual || areNaN;
}

console.log('\n=== primitives ===\n');
console.log(true, deepEquals(1, 1)); // true
console.log(false, deepEquals(1, 2)); // false
console.log(true, deepEquals('abc', 'abc')); // true
console.log(false, deepEquals('bc', 'abc')); // false
console.log(true, deepEquals(true, true)); // true
console.log(false, deepEquals(true, false)); // false
console.log(false, deepEquals(NaN, null)); // false
console.log(true, deepEquals(NaN, NaN)); // true
console.log(false, deepEquals(null, [1])); // false
console.log(false, deepEquals([1], null)); // false
console.log(false, deepEquals(undefined, [1])); // false
console.log(false, deepEquals([1], undefined)); // false

console.log('\n=== arrays ===\n');
console.log(false, deepEquals([0], [1])); // false
console.log(false, deepEquals([0, 1, 2], [4, 5, 6])); // false
console.log(false, deepEquals([0, 'abc', 2], [0, 'abc', '2'])); // false
console.log(false, deepEquals([0, 'abc', '2'], [0, 'abc', 2])); // false
console.log(false, deepEquals([null, null, true], [null, undefined, true])); // false
console.log(false, deepEquals([null, undefined, true], [null, null, true])); // false
console.log(true, deepEquals([0, 1, 2], [0, 1, 2])); // true
console.log(true, deepEquals([0, 1, [1, 2, 3]], [0, 1, [1, 2, 3]])); // true
console.log(true, deepEquals([{}], [{}])); // true
console.log(true, deepEquals([{}, {}, []], [{}, {}, []])); // true
console.log(false, deepEquals([], {})); // false
console.log(false, deepEquals([], undefined)); // false
console.log(false, deepEquals(undefined, [])); // false
console.log(false, deepEquals([{}, null], [{}])); // false

console.log('\n=== objects ===\n');
console.log(true, deepEquals({}, {})); // true
console.log(false, deepEquals({ a: 123 }, { a: '123' })); // false
console.log(true, deepEquals({ 1: 1, 2: 2, 3: 3 }, { 1: 1, 2: 2, 3: 3 })); // true
console.log(true, deepEquals({ 1: 1, 2: 2, 3: 3 }, { 2: 2, 1: 1, 3: 3 })); // true
console.log(
  true,
  deepEquals(
    { 1: 1, 2: 2, 3: { a: 'a', b: 'b' } },
    { 2: 2, 1: 1, 3: { a: 'a', b: 'b' } }
  )
); // true
console.log(
  true,
  deepEquals(
    { 1: 1, 2: 2, 3: { a: 'a', b: ['b', 23] } },
    { 2: 2, 1: 1, 3: { a: 'a', b: ['b', 23] } }
  )
); // true
console.log(
  false,
  deepEquals(
    { 1: 1, 2: 2, 3: { a: 'a', b: ['b', 23] } },
    { 2: 2, 1: 1, 3: { a: 'a', b: ['b', 22] } }
  )
); // false

console.log(false, deepEquals({}, null)); // false
console.log(false, deepEquals(null, {})); // false
console.log(false, deepEquals({}, undefined)); // false
console.log(false, deepEquals(undefined, {})); // false
