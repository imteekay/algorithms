// https://www.urionlinejudge.com.br/judge/en/problems/view/1531
#include <iostream>
#include <vector>

using namespace std;

int fibonacci_dp(int n) {
  if (n == 0) return 0;
  else if (n == 1) return 1;
  vector<int> memo(n + 1);
  memo[0] = 0;
  memo[1] = memo[2] = 1;
  for (int i = 2; i <= n; ++i) memo[i] = memo[i-1] + memo[i-2];
  return memo.back();
}

int main() {
	long int n1, n2;
	
	while (scanf("%li %li", &n1, &n2) != EOF) {
		cout << fibonacci_dp(fibonacci_dp(n1)) % n2 << endl;
	}
	
	return 0;
}
