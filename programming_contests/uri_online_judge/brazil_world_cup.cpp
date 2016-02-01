// https://www.urionlinejudge.com.br/judge/en/problems/view/1564

#include <iostream>

using namespace std;

int main() {

  int n;

  while (scanf("%d", &n) != EOF) {
    if (n == 0) {
      cout << "vai ter copa!" << endl;
    } else {
      cout << "vai ter duas!" << endl;
    }
  }

  return 0;
}
