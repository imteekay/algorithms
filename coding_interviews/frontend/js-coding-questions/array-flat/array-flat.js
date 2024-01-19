// https://bigfrontend.dev/problem/implement-Array-prototype.flat

// This is a JavaScript coding problem from BFE.dev

function flat(arr, depth = 1) {
  let output = [];

  for (let item of arr) {
    if (Array.isArray(item)) {
      if (depth > 0) {
        output.push(...flat(item, depth - 1));
      } else {
        output.push(item);
      }
    } else {
      output.push(item);
    }
  }

  return output;
}
