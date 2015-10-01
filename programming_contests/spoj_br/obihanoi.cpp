#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {

  int n, test=1;
  cin >> n;

  while (n != 0) {

    long long int times = pow(2, n) - 1;

    cout << "Teste " << test << endl;
    cout << times << endl << endl;

    times=0;
    test++;
    cin >> n;
  }

  return 0;
}
