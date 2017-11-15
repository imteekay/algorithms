#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

  int n;
  double bang;
  cin >> n;

  while (n--) {
    vector<float> v;
    for (int i = 0; i < 12; i++) {
      cin >> bang;
      v.push_back(bang);
    }

    sort(v.begin(), v.end());

    float total = 0;

    for (int i = 3; i < 12; i++) {
      total += v[i];
    }

    float media = total / 9;

    if (media * 0.2 < 1.75) {
      cout << "REPROVADO" << endl;
    } else {
      double coisa = ((5.75 - (media * 0.2)) / 0.8) * 2;
      printf("%.1f\n", coisa);
    }
  }

  return 0;
}
