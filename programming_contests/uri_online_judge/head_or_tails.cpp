// https://www.urionlinejudge.com.br/judge/en/problems/view/1329

#include <iostream>

using namespace std;

int main() {

  int mary=0, john=0;
  int n, temp;
  cin >> n;

  while (n != 0) {
    while (n--) {
      cin >> temp;
      if (temp) john++;
      else mary++;
    }

    cout << "Mary won " << mary << " times and John won " << john << " times" << endl;
    cin >> n;
  }

}
