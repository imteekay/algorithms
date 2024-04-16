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

export function deepEquals(valueOne, valueTwo) {
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
