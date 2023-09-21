#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {

  int t, n1, n2, result;
  cin >> t >> n1 >> n2;

  while (1) {

    if (n1 - n2 == t) {
      result = n1;
      break;
    }

    if (n2 - n1 == t) {
      result = n2;
      break;
    }

    if (n1 < n2) n1 += n1;
    else n2 += n2;

  }

  cout << result << endl;

  return 0;
}
