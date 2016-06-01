#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

  int n;

  while (cin >> n && n != -1) {
    cout << 31 % n << endl;
  }

  return 0;
}
