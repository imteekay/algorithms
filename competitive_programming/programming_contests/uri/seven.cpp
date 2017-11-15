// https://www.urionlinejudge.com.br/judge/en/problems/view/2590

#include <iostream>

using namespace std;

int main() {
  cin.tie(NULL);
  cout.sync_with_stdio(false);
  long long int N, num;
  cin >> N;

  while (N--) {
    cin >> num;

    switch (num & 3) {
      case 0:
        cout << 1 << '\n';
        break;
      case 1:
        cout << 7 << '\n';
        break;
      case 2:
        cout << 9 << '\n';
        break;
      case 3:
        cout << 3 << '\n';
        break;
    }
  }

  return 0;
}
