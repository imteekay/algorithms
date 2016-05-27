#include <iostream>

using namespace std;

int main() {
  unsigned long int a, b, i;

  while(cin >> a >> b){
    i = a ^ b;
    cout << i << endl;
  }

  return 0;
}
