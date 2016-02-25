// https://www.urionlinejudge.com.br/judge/en/problems/view/1240

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int verify_number(unsigned long long int n1, unsigned long long int n2) {
  vector<int> v1, v2;

  while (n2 > 0) {
    v1.push_back(n1 % 10);
    v2.push_back(n2 % 10);
    n1 /= 10;
    n2 /= 10;
  }

  for (int j = 0; j < v2.size(); j++) if (v1[j] != v2[j]) return 0;
  return 1;
}

int main() {
  int n;
  cin >> n;

  while (n--) {
    unsigned long long int n1, n2;
    cin >> n1 >> n2;

    if (n1 >= n2 && verify_number(n1, n2)) {
      cout << "encaixa" << endl;
    } else {
      cout << "nao encaixa" << endl;
    }
  }

  return 0;
}
