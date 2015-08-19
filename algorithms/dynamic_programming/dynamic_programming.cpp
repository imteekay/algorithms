#include <iostream>
#include <vector>

using namespace std;

int fibonacci(int n) {
  // exponation time - T(n) = T(n - 1) + T(n - 2) + const(1)
  if (n <= 2) return 1;

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int fibonacci_dp(int n) {
    if (n <= 1) return 1;

    std::vector<int> memo(n + 1);
    memo[0] = 0;
    memo[1] = memo[2] = 1;

    for (int i = 2; i <= n; ++i)
        memo[i] = memo[i-1] + memo[i-2];

    return memo.back();
}

int main() {

  int n = 5, m = 5;

  // recursive algorithm without DP
  cout << fibonacci(n) << endl;

  // memoized DP algorithm: add in the map. If we have the element in the map, return the result
  cout << fibonacci_dp(m) << endl;

  return 0;
}
