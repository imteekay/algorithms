// https://www.urionlinejudge.com.br/judge/en/problems/view/2029

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

  float vol, diam, area, height, pi=3.14, radius;

  while (scanf("%f %f", &vol, &diam) != EOF) {
    radius = diam / 2;
    area = pi * pow(radius, 2);
    height = vol / area;
    cout << fixed << setprecision(2) << "ALTURA = " << height << endl;
    cout << fixed << setprecision(2) << "AREA = " << area << endl;
  }

  return 0;
}
