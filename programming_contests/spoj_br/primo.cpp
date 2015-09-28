// http://br.spoj.com/problems/PRIMO/

#include <iostream>
#include <math.h>

using namespace std;

int is_prime(int num) {
  int number = num;
  int total_divisivel = 0;

  if (num < 0) number = -(number);

  if (number == 0 || number == 1) return 0;
  else if (number == 2) return 1;
  else if (number % 2 == 0) return 0;

  int s = sqrt(number);

  for (int i = 3; i <= s; i += 2) {
    if (n % i == 0)
      return 0;
  }

  return 1;


}

int main() {

  int n;

  cin >> n;

  if (is_prime(n)) cout << "sim" << endl;
  else cout << "no" << endl;

  return 0;
}
