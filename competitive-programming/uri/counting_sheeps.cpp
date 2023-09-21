// https://www.urionlinejudge.com.br/judge/en/problems/view/1609

#include <iostream>
#include <set>

using namespace std;

int main() {

  int n, x, temp;
  cin >> n;

  while (n--) {
    cin >> x;
    set<int> s;
    for (int i = 0; i < x; i++) {
      cin >> temp;
      s.insert(temp);
    }

    cout << s.size() << endl;
  }

  return 0;
}
