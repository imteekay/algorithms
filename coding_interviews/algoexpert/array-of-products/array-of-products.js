// Runtime: O(N^2), N = length of array
// Space: O(N)

function initOutput(length) {
  let output = [];

  while (length--) {
    output.push(1);
  }

  return output;
}

function arrayOfProducts(array) {
  let output = initOutput(array.length);

  for (let index = 0; index < array.length; index++) {
    for (let outputIndex = 0; outputIndex < output.length; outputIndex++) {
      if (index !== outputIndex) {
        output[outputIndex] *= array[index];
      }
    }
  }

  return output;
}
