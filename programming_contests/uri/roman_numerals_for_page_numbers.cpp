// https://www.urionlinejudge.com.br/judge/en/problems/view/1960

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int n, remainder, integer;
  string c[] = { "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
  string d[] = { "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
  string u[] = { "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
  cin >> n;

  integer = n / 100;
  remainder = n % 100;

  switch(integer) {
      case 1: cout << c[0]; break;
      case 2: cout << c[1]; break;
      case 3: cout << c[2]; break;
      case 4: cout << c[3]; break;
      case 5: cout << c[4]; break;
      case 6: cout << c[5]; break;
      case 7: cout << c[6]; break;
      case 8: cout << c[7]; break;
      case 9: cout << c[8]; break;
  }

  integer = remainder / 10;
  remainder = remainder % 10;

  switch(integer) {
      case 1: cout << d[0]; break;
      case 2: cout << d[1]; break;
      case 3: cout << d[2]; break;
      case 4: cout << d[3]; break;
      case 5: cout << d[4]; break;
      case 6: cout << d[5]; break;
      case 7: cout << d[6]; break;
      case 8: cout << d[7]; break;
      case 9: cout << d[8]; break;
  }

  integer = remainder / 1;

  switch(integer) {
      case 1: cout << u[0]; break;
      case 2: cout << u[1]; break;
      case 3: cout << u[2]; break;
      case 4: cout << u[3]; break;
      case 5: cout << u[4]; break;
      case 6: cout << u[5]; break;
      case 7: cout << u[6]; break;
      case 8: cout << u[7]; break;
      case 9: cout << u[8]; break;
  }

  return 0;
}
