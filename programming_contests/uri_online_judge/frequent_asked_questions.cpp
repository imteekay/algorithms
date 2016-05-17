// https://www.urionlinejudge.com.br/judge/en/problems/view/1553

#include <iostream>
#include <map>

using namespace std;

int main() {

  int n, k, num;

  while (cin >> n >> k && n + k != 0) {
    map<int, int> m;
    int counter = 0;

    for (int i = 0; i < n; i++) {
      cin >> num;
      if (m.find(num) != m.end()) m[num]++;
      else m[num] = 1;
    }

    map<int, int>::iterator it;

    for (it = m.begin(); it != m.end(); it++) {
      if (it->second >= k) counter++;
    }

    cout << counter << endl;
  }

  return 0;
}
