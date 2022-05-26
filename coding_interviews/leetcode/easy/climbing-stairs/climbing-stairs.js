function climbStairs(n) {
  let memo = [0, 1, 2, 3];

  for (let i = 4; i <= n; i++) {
    memo.push(memo[i - 1] + memo[i - 2]);
  }

  return memo[n];
}
