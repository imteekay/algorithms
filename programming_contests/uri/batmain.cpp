// https://www.urionlinejudge.com.br/judge/pt/problems/view/2510

#include <iostream>
#include <string>

using namespace std;

int main() {
  int N;
  string name;
  cin >> N;

  while (N--) {
    cin.ignore();
    getline(cin, name);
    if (name != "Batmain") cout << "Y" << endl;
    else cout << "N" << endl;
  }

  return 0;
}
