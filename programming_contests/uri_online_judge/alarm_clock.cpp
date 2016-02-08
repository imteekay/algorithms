// https://www.urionlinejudge.com.br/judge/en/problems/view/1103

#include <iostream>

using namespace std;

int main() {

  int h1, m1, h2, m2, minutes=0;

  cin >> h1 >> m1 >> h2 >> m2;

  while (h1 + m1 + h2 + m2 != 0) {

    if (h1 == h2 && m1 == m2) {
      minutes = 1440;
    } else {
      if (h1 > h2) {
        if (m2 > m1) {
          minutes = 1440 - (h1 - h2) * 60 + (m2 - m1);
        } else if (m1 > m2) {
          minutes = 1440 - (h1 - h2) * 60 + (m2 - m1);
        } else {
          minutes = 1440 - (h1 - h2) * 60;
        }
      } else if (h2 > h1) {
        if (m1 > m2) {
          minutes = (h2 - h1) * 60 + m2 - m1;
        } else if (m2 > m1) {
          minutes = (h2 - h1) * 60 + m2 - m1;
        } else {
          minutes = (h2 - h1) * 60;
        }
      } else {
        if (m2 > m1) {
          minutes = m2 - m1;
        } else {
          minutes = 1440 + m2 - m1;
        }
      }
    }

    cout << minutes << endl;
    cin >> h1 >> m1 >> h2 >> m2;
  }

  return 0;
}
