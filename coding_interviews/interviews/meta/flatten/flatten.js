// [1, [2, [ [3, 4], 5], 6]] => [1, 2, 3, 4, 5, 6]

function flatten(arr) {
  const flatArray = [];

  arr.forEach((element) => {
    if (Number.isInteger(element)) {
      flatArray.push(element);
    } else {
      flatArray.push(...flatten(element));
    }
  });

  return flatArray;
}

const flatArray = flatten([1, [2, [[3, 4], 5], 6]]);

console.log(flatArray, [1, 2, 3, 4, 5, 6]);
