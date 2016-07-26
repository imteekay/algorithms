// https://www.urionlinejudge.com.br/judge/en/problems/view/2167

#include <iostream>

using namespace std;

int main() {
  int n, current, x, result = 0;
  cin >> n >> current;

  for (int i = 2; i <= n; i++) {
    cin >> x;
    if (x < current) {
      result = i;
      break;
    } else {
      current = x;
    }
  }

  cout << result << endl;

  return 0;
}
