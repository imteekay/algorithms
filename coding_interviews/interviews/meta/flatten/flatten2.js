// [1, [2, null, true, [ [3, 'NaN', 4, undefined], 5], false, 6, '7']] => [1, 2, 3, 4, 5, 6]

function isString(str) {
  return typeof str === 'string' || str instanceof String;
}

function flatten(arr) {
  const flatArray = [];

  arr.forEach((element) => {
    if (Number.isInteger(element)) {
      flatArray.push(element);
    }

    if (element instanceof Array) {
      flatArray.push(...flatten(element));
    }

    if (isString(element)) {
      const numberValue = Number(element);

      if (Number.isInteger(numberValue)) {
        flatArray.push(numberValue);
      }
    }
  });

  return flatArray;
}

const flatArray = flatten([
  1,
  [2, null, true, [[3, 'NaN', 4, undefined], 5], false, 6, '7'],
]);

console.log(flatArray, [1, 2, 3, 4, 5, 6, 7]);
