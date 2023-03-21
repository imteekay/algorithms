function generateSubarrays(arr, start, end, result) {
  if (end == arr.length) return;
  else if (start > end) generateSubarrays(arr, 0, end + 1, result);
  else {
    result.push(arr.slice(start, end + 1));
    generateSubarrays(arr, start + 1, end, result);
  }
}

let arr = [1, 2, 3];
let result = [];

generateSubarrays(arr, 0, 0, result);

console.log(result);
