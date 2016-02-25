// https://www.urionlinejudge.com.br/judge/en/problems/view/1214

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {

  int n;
  cin >> n;

  while (n--) {
    int x, temp;
    double total = 0;
    cin >> x;
    vector<int> v;

    for (int i = 0; i < x; i++) {
      cin >> temp;
      v.push_back(temp);
      total += temp;
    }

    double average = total / x;
    double counter = 0;

    for (int i = 0; i < x; i++) if (v[i] > average) counter++;

    cout << fixed << setprecision(3) << (counter / x) * 100.00 << "%" << endl;
  }

  return 0;
}
