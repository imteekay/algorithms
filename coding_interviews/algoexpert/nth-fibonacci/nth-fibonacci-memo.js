// Runtime: O(N)
// Space: O(N)

function getNthFib(n) {
  if (n === 1) return 0;
  if (n === 2) return 1;

  let memo = [0, 0, 1];
  let result;

  for (let num = 3; num <= n; num++) {
    result = memo[num - 1] + memo[num - 2];
    memo.push(result);
  }

  return result;
}
