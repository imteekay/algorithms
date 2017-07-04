// https://www.urionlinejudge.com.br/judge/en/problems/view/2533

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int M, N, C, sum_of_c, sum_of_nc;

  while(cin >> M) {
    sum_of_c = 0, sum_of_nc = 0;

    while (M--) {
      cin >> N >> C;
      sum_of_nc += N * C;
      sum_of_c += C;
    }

    cout << fixed << setprecision(4) << sum_of_nc / (sum_of_c * 100.00) << endl;
  }

  return 0;
}
