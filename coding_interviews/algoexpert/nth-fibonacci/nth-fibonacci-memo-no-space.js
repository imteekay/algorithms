// Runtime: O(N)
// Space: O(1)

function getNthFib(n) {
  if (n === 1) return 0;
  if (n === 2) return 1;

  let first = 0;
  let second = 1;

  for (let num = 3; num <= n; num++) {
    let sum = first + second;
    first = second;
    second = sum;
  }

  return second;
}
