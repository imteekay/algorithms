// https://www.urionlinejudge.com.br/judge/en/problems/view/2162

#include <iostream>

using namespace std;

int main() {
  int n, first, second, result = 1;
  bool bigger;
  cin >> n >> first >> second;
  n -= 2;

  if (first > second) {
    bigger = true;
  } else if (first < second) {
    bigger = false;
  } else {
    cout << 0 << endl;
    return 0;
  }

  while (n--) {
    first = second;
    cin >> second;

    if (first > second && !bigger) bigger = true;
    else if (first < second && bigger) bigger = false;
    else result = 0;
  }

  cout << result << endl;

  return 0;
}
