// https://www.urionlinejudge.com.br/judge/en/problems/view/1323

#include <iostream>

using namespace std;

int feyman(int n) {
  if (n == 1) return 1;
  return n * n + feyman(n - 1);
}

int main() {

  int n;
  cin >> n;

  while (n != 0) {
    cout << feyman(n) << endl;
    cin >> n;
  }

  return 0;
}
