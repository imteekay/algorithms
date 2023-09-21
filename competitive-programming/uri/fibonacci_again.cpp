// https://www.urionlinejudge.com.br/judge/en/problems/view/1531

#include <iostream>
#include <vector>

using namespace std;

#define MOD 1000000007;
long long int a,b,c,d;

void fast_fib(long long int n,long long int ans[]) {
  if (n == 0) {
    ans[0] = 0;
    ans[1] = 1;
    return;
  }

  fast_fib((n/2),ans);
  a = ans[0];
  b = ans[1];
  c = 2 * b - a;
  
  if (c < 0) c += MOD;
  
  c = (a * c) % MOD;
  d = (a*a + b*b) % MOD;

  if (n % 2 == 0) {
    ans[0] = c;
    ans[1] = d;
  } else {
    ans[0] = d;
    ans[1] = c+d;
  }
}

int main() {
	long long int n1;
	int n2;	
	
	while (scanf("%lli %i", &n1, &n2) != EOF) {
		long long int ans[2]={0};
    fast_fib(n1, ans);
    long long int res[2]={0};
    fast_fib(ans[0], res);
		cout << res[0] % n2 << endl;
	}
	
	return 0;
}
