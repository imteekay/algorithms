#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

  int marq, n, e;
  string s;

  while (cin >> marq) {
    cin >> n;
    cin.ignore();
    getline(cin, s);
    string st = s + s;
    cin >> e;
    e = e % n;

    while(st.size() < marq) {
      st += s;
    }

    if (marq > n) cout << st.substr(e, n) << endl;
    else cout << st.substr(e, marq) << endl;
  }

  return 0;
}
