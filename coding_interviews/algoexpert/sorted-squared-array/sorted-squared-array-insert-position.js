// Runtime: O(n)
// Space: O(n)

function sortedSquaredArray(array) {
  let output = [];

  for (let num of array) {
    let square = num * num;
    let inserted = false;

    for (let index = 0; index < output.length; index++) {
      if (square <= output[index]) {
        output = [...output.slice(0, index), square, ...output.slice(index)];
        inserted = true;
        break;
      }
    }

    if (!inserted) output.push(square);
  }

  return output;
}
