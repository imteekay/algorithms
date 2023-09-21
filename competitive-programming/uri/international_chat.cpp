// https://www.urionlinejudge.com.br/judge/en/problems/view/1581

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  int num, n;
  cin >> num;
  string lang;

  while (num--) {
    cin >> n;
    vector<string> languages;

    for (int i = 0; i < n; i++) {
      cin >> lang;
      languages.push_back(lang);
    }

    string first_language = languages[0];
    bool english = false;

    for (int j = 1; j < languages.size(); j++) {
      if (first_language != languages[j]) {
        english = true;
        break;
      }
    }

    if (english) cout << "ingles" << endl;
    else cout << first_language << endl;

    languages.clear();
  }

  return 0;
}
