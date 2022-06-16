// Given an array of integers `arr` and an integer `k`, find the kth largest element

// Runtime: O(NlogN)
// Space: O(1)
export function kthLargest(list, k) {
  return list.sort((num1, num2) => num1 - num2)[list.length - k];
}
