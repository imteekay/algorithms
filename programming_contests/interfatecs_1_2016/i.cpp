#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

  double br, ext, h, gastobr, gastoext, cam;

  cin >> br >> ext >> h >> gastobr >> gastoext >> cam;
  double bang = (br * h * (1 - gastobr / 100) * 1.01);
  bang += (br * h * (1 - gastobr / 100) * 1.01 * 1.01 * 1.01);
  bang += (br * h * (1 - gastobr / 100)* 1.01 * 1.01);

  double bang2 = 0;
  bang2 += (ext * h * cam * (1 - gastoext / 100)* 1.01);
  bang2 += (ext * h * cam * (1 - gastoext / 100)* 1.01* 1.01);
  bang2 += (ext * h * cam * (1 - gastoext / 100)* 1.01* 1.01* 1.01);


  printf("%.2fBR %.2fES\n", (bang), bang2);

  return 0;
}
