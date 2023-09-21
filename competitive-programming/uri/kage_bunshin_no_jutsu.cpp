#include <iostream>

using namespace std;

int jutsuNumber(long long int N) {
  if (N <= 1) return 0;
  return 1 + jutsuNumber(N / 2);
}

int main() {
  long long int N;

  while (cin >> N) {
    cout << jutsuNumber(N) << endl;
  }

  return 0;
}
