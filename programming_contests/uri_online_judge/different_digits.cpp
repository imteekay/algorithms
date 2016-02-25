// https://www.urionlinejudge.com.br/judge/en/problems/view/1285

#include <iostream>
#include <vector>

using namespace std;

int different_digits(int n) {
  vector<int> v;

  while (n > 0) {
    v.push_back(n % 10);
    n /= 10;
  }

  int different = 1;

  for (int i = 0; i < v.size(); i++) {
    for (int j = i + 1; j < v.size(); j++) {
      if (v[i] == v[j]) {
        different = 0;
        break;
      }
    }
  }

  return different;
}

int main() {
  int n1, n2;

  while (scanf("%d %d", &n1, &n2) != EOF) {
    int counter=0;
    for (int i = n1; i <= n2; i++) if (different_digits(i)) counter++;
    cout << counter << endl;
  }

  return 0;
}
