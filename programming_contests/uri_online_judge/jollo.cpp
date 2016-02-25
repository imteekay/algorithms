// https://www.urionlinejudge.com.br/judge/en/problems/view/1321

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  vector<int> prince;
  vector<int> princess;

  while (a + b + c + x + y != 0) {
    princess.push_back(a);
    princess.push_back(b);
    princess.push_back(c);
    prince.push_back(x);
    prince.push_back(y);

    sort(princess.begin(), princess.end());
    sort(prince.begin(), prince.end());

    int princess_smaller = princess[0];
    int prince_smaller = prince[0];

    if (prince_smaller < princess_smaller) cout << -1 << endl;
    else {

    }

    cin >> a >> b >> c >> x >> y;
  }

  return 0;
}
