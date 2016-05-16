#include <iostream>
#include <vector>
#include <map>

using namespace std;

int fibonacci(int n) {
  // exponation time - T(n) = T(n - 1) + T(n - 2) + const(1) --> O(2^(n/2))
  if (n <= 2) return 1;

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int fibonacci_dp(int n) {
  if (n == 0) return 0;
  else if (n == 1) return 1;

  map<int, int> fib;
  fib[0] = 0;
  fib[1] = 1;

  for (int i = 2; i <= n; ++i)
    fib[i] = fib[i-1] + fib[i-2];

  return fib[n];
}

int main() {

  int n = 5, m = 5;

  // recursive algorithm without DP
  cout << fibonacci(n) << endl;

  // memoized DP algorithm: add in the map. If we have the element in the map, return the result
  for(int i = 0; i < 20; i++)
    cout << fibonacci_dp(i) << endl;

  return 0;
}
