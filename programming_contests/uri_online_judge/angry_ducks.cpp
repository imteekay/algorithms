// https://www.urionlinejudge.com.br/judge/en/problems/view/1163

#include <stdio.h>
#include <math.h>

#define PI      3.14159
#define g       9.80665

double rad(double angle) {
  return (angle / 180.0) * PI;
}

int main() {
  double h, alfa, v, t, Vx, Vy, x, aux1, aux2, p1, p2;
  int n;
  char character;

  while (scanf("%lf %lf %lf %d", &h, &p1, &p2, &n) > 0) {
    aux1 = (2*h)/g;

    for (; n > 0; n--) {
      scanf("%lf %lf", &alfa, &v);

      Vx = v * cosf(rad(alfa));
      Vy = v * sinf(rad(alfa));

      aux2 = Vy/g;

      t = sqrtf(aux1 + powf(aux2, 2)) + aux2;

      x = Vx * t;

      character = (x >= p1 && x <= p2)? 'D': 'N';

      printf("%.5lf -> %cUCK\n", x, character);
    }
  }

  return 0;
}
