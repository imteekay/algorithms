#include <iostream>

using namespace std;

int main() {
  int A[4]; // 4 bytes x 4 integers = 16 bytes
  A[0] = 0, A[1] = 1, A[2] = 2, A[3] = 3;
  cout << A << endl; // address of A array first element
  cout << *A << endl; // value of first element from A array | Same as A[0]

  return 0;
}
