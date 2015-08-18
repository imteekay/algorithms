#include <iostream>
#include <vector>
#include <ctype.h>
#include <cmath>
#include <algorithm>

using namespace std;

bool is_integer(float k) {
  return std::floor(k) == k;
}

bool all_equal(vector<int> &vetorzin) {
  sort(vetorzin.begin(), vetorzin.end());

  return (vetorzin[0] == vetorzin.back());
}

int main() {

  int n, temp;
  float total=0;
  vector<int> v;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    total += temp;
    v.push_back(temp);
  }

  if (is_integer(total / n))
    cout << -1 << endl;
  else {
    if (all_equal(v))
      cout << 1 << endl;
    else {
      // algorithm to know how many times
    }
  }

  return 0;
}
