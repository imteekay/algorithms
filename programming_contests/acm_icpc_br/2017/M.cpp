#include <iostream>

using namespace std;

int main() {
  int N1, N2, N3;

  cin >> N1 >> N2 >> N3;

  int one = N2 * 2 + N3 * 4,
      two = N1 * 2 + N3 * 2,
      three = N1 * 4 + N2 * 2;

  if (one <= two && one <= three) cout << one << endl;
  else if (two <= three) cout << two << endl;
  else cout << three << endl;

  return 0;
}
