// GUARDCOS

#include <iostream>
#include <cmath>
using namespace std;

int main() {

  float d, f, g, n, distancia_perpendicular = 12;

  while(scanf("%f %f %f", &d, &f, &g) != EOF) {
    n = sqrt((144 + d*d));

    if ((12 / f) < (n / g))
      cout << 'N' << endl;
    else
      cout << 'S' << endl;
  }

  return 0;
}
