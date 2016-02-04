// https://www.urionlinejudge.com.br/judge/en/problems/view/1190

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main() {

  vector< vector<double> > v1;
  double n, total=0;
  string operation;

  cin >> operation;

  for (int i = 0; i < 12; i++) {
    vector<double> v;

    for (int j = 0; j < 12; j++) {
      cin >> n;
      v.push_back(n);
    }

    v1.push_back(v);
  }

  int counter1=11, count = 0;

  for (int i = 1; i < 11; i++) {
    for (int j = counter1; j < 12; j++) {
      total += v1[i][j];
      count++;
    }

    if (i < 5) counter1--;
    else if (i > 5) counter1++;
  }

  if (operation == "S") cout << fixed << setprecision(1) << total << endl;
  else cout << fixed << setprecision(1) << total / count << endl;

  return 0;
}
