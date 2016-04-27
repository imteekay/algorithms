// https://www.urionlinejudge.com.br/judge/en/problems/view/1300

#include <iostream>

using namespace std;

int main() {  
  int angle;

  while (scanf("%i", &angle) != EOF) {
    if (angle % 6 == 0) cout << "Y" << endl;
    else cout << "N" << endl;
  }

  return 0;
}