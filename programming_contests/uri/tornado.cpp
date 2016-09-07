// https://www.urionlinejudge.com.br/judge/en/problems/view/1266

#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  string tornado;
  char post;

  while (cin >> n && n != 0) {
    tornado = "";

    for (int i = 0; i < n; i++) {
      cin >> post;
      tornado += post;
    }

    if (tornado.begin() == "1" || tornado.back() == "1") {
      cout << tornado << endl;
    } else {

    }
  }

  return 0;
}
