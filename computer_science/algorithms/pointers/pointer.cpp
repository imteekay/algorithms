#include <iostream>

using namespace std;

int main() {
  int n = 10;
  int *p;
  p = &n;

  cout << "N value: " << n << endl;
  cout << "Address pointed by P: " << p << endl;
  cout << "Value from the address pointed by P: " << *p << endl;

  *p = 20;

  cout << "Changed the value from the address pointed by P: " << *p << endl;
  cout << "New N value: " << n << endl;

  return 0;
}
