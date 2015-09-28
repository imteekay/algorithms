// http://br.spoj.com/problems/PRIMO/

#include <iostream>
#include <math.h>

using namespace std;

int is_prime(int num) {
  int number = num;

  if (num < 0) number = -(number);

  if (number == 0 || number == 1) return 0;
  else if (number == 2 || number == 3) return 1;

  for (int i = 4; i < Math.sqrt(number); i++) {

  }


}

int main() {

  int n;

  cin >> n;

  if (is_prime(n)) cout << "sim" << endl;
  else cout << "no" << endl;

  return 0;
}
