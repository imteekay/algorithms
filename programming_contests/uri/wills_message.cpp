#include <iostream>
#include <string>

using namespace std;

int main() {
  string message, s;
  int N, num;

  while (cin >> s) {
    cin >> N;
    message = "";

    while (N--) {
      cin >> num;
      message += s[num-1];
    }

    cout << message << endl;
  }

  return 0;
}
