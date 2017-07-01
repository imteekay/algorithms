#include <iostream>
#include <string>

using namespace std;

string happiness_index(int index) {
  string result = "";
  while (index--) result += "a";
  return result;
}

int main() {
  cout << "Feliz nat";
  int index;
  cin >> index;
  cout << happiness_index(index);
  cout << "l!" << endl;
}
