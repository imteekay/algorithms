// https://bigfrontend.dev/problem/array-intersect
// Runtime: O(N), N = size of arr1 and arr2
// Space: O(N), N = size of arr1 and arr2 (for the new array and the hashmap)

export function getIntersection(arr1, arr2) {
  let map = new Map();
  let result = [];

  for (let num of arr1) {
    map.set(num, 1);
  }

  for (let num of arr2) {
    if (map.get(num) === 1) {
      result.push(num);
      map.set(num, 0);
    }
  }

  return result;
}
