// https://www.urionlinejudge.com.br/judge/pt/problems/view/2482

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  int N, M;
  string language, merry, name;
  map<string, string> languages;

  cin >> N;

  while (N--) {
    cin >> language;
    cin.ignore();
    getline(cin, merry);
    languages[language] = merry;
  }

  cin >> M;
  cin.ignore();

  while (M--) {
    getline(cin, name);
    cin >> language;
    cout << name << endl << languages[language] << endl << endl;
  }

  return 0;
}
