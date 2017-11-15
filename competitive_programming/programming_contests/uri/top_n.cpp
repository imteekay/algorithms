// https://www.urionlinejudge.com.br/judge/en/problems/view/1943

#include <iostream>

using namespace std;

int main() {

  int n;
  cin >> n;

  if (n <= 1) {
    cout << "Top 1" << endl;
  } else if (n <= 3) {
    cout << "Top 3" << endl;
  } else if (n <= 5) {
    cout << "Top 5" << endl;
  } else if (n <= 10) {
    cout << "Top 10" << endl;
  } else if (n <= 25) {
    cout << "Top 25" << endl;
  } else if (n <= 50) {
    cout << "Top 50" << endl;
  } else if (n <= 100) {
    cout << "Top 100" << endl;
  }

  return 0;
}
