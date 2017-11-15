// https://www.urionlinejudge.com.br/judge/en/problems/view/2126

#include <iostream>
#include <string>

using namespace std;

int main() {
  string subs, s;
  int pos, qtd, casy = 1;

  while (cin >> subs && cin >> s) {
    qtd = 0;
    pos = -1;

    for (int i = 0; i < s.size() - subs.size() + 1; i++) {
      if (subs == s.substr(i, subs.size())) {
        qtd++;
        pos = i+1;
      }
    }

    cout << "Caso #" << casy << ":" << endl;

    if (pos == -1) cout << "Nao existe subsequencia" << endl;
    else cout << "Qtd.Subsequencias: " << qtd << endl << "Pos: " << pos << endl;
    cout << endl;
    casy++;
  }

  return 0;
}
