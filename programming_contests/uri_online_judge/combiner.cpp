// https://www.urionlinejudge.com.br/judge/en/problems/view/1238

#include <iostream>
#include <string>

using namespace std;

int main() {

  int n;
  cin >> n;

  string s1, s2;

  while (n--) {
    cin >> s1 >> s2;
    string result = "";

    if (s1.size() >= s2.size()) {
      for (int i = 0; i < s2.size(); i++) {
        result += s1[i];
        result += s2[i];
      }
      result += s1.substr(s2.size(), s1.size() - 1);
    } else {
      for (int i = 0; i < s1.size(); i++) {
        result += s1[i];
        result += s2[i];
      }
      result += s2.substr(s1.size(), s2.size() - 1);
    }

    cout << result << endl;
  }

  return 0;
}
