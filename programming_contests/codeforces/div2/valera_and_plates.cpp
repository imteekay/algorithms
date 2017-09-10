// http://codeforces.com/problemset/problem/369/A

#include <iostream>

using namespace std;

int main() {
  int N, M, K, num, W = 0;
  cin >> N >> M >> K;

  while (N--) {
    cin >> num;

    if (num == 1) {
      if (M == 0) W++;
      else M--;
    } else {
      if (K == 0) {
        if (M == 0) W++;
        else M--;
      } else {
        K--;
      }
    }
  }

  cout << W << endl;

  return 0;
}
