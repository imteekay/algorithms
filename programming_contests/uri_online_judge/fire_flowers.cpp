// https://www.urionlinejudge.com.br/judge/en/problems/view/1039

#include <iostream>
#include <math.h>

using namespace std;

int to_positive(int number) {
  if (number < 0) return number * (-1);
  return number;
}

int main() {

  int r1, x1, y1, r2, x2, y2;

  while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2) {
    int total_radius = r1 + r2;
    int distance_x = to_positive(x1 - x2);
    int distance_y = to_positive(y1 - y2);
    double total_distance = sqrt(pow(distance_x, 2) + pow(distance_y, 2));
    if (total_distance > total_radius) cout << "MORTO" << endl;
    else cout << "RICO" << endl;
  }

  return 0;
}
