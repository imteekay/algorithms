// https://www.urionlinejudge.com.br/judge/pt/problems/view/2588

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  string s;
  int N;

  while (cin >> s) {
    map<char, int> mapper;
    N = 0;

    for (int i = 0; i < s.size(); i++) {
      if (mapper.find(s[i]) != mapper.end()) mapper.find(s[i])->second++;
      else mapper[s[i]] = 1;
    }

    for (map<char, int>::iterator it = mapper.begin(); it != mapper.end(); it++) if (it->second % 2 != 0) N++;

    if (N == 0) cout << 0 << endl;
    else cout << --N << endl;
  }

  return 0;
}
