// https://www.urionlinejudge.com.br/judge/pt/problems/view/2591

#include <iostream>
#include <string>

using namespace std;

string ka(int as) {
  string s = "k";
  for (int i = 0; i < as; i++) s += "a";
  return s;
}

int main() {
  int N, as;
  string s;

  cin >> N;

  while (N--) {
    cin >> s;
    as = (s.find("m") - 1) * (s.size() - 3 - s.find("k"));
    cout << ka(as) << endl;
  }

  return 0;
}
