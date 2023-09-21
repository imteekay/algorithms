// https://www.urionlinejudge.com.br/judge/en/problems/view/1212

#include <iostream>
#include <vector>

using namespace std;

int main() {

  long long int n1, n2;
  cin >> n1 >> n2;

  while (n1 + n2 != 0) {
    vector<int> v1, v2;
    int counter = 0;

    while (n1 > 0) {
      v1.push_back(n1 % 10);
      n1 /= 10;
    }

    while (n2 > 0) {
      v2.push_back(n2 % 10);
      n2 /= 10;
    }

    if (v1.size() > v2.size()) {
      for (int i = 0; i < v2.size(); i++) if (v1[i] + v2[i] >= 10) counter++;
    } else {
      for (int i = 0; i < v1.size(); i++) if (v1[i] + v2[i] >= 10) counter++;
    }

    if (counter == 1) cout << counter << " carry operation." << endl;
    else if (counter > 1) cout << counter << " carry operations." << endl;
    else cout << "No carry operation." << endl;
    cin >> n1 >> n2;
  }

  return 0;
}
