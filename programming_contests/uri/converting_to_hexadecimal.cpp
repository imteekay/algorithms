// https://www.urionlinejudge.com.br/judge/en/problems/view/1957

#include <iostream>
#include <string>

using namespace std;

// 1 2 3 4 5 6 7 8 9 A B C D E F 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F 20

string reverseString(string hex) {
  string newHex = "";
  for (int i = hex.size()-1; i >= 0; i--) newHex += hex[i];
  return newHex;
}

int main() {
  string hex = "0123456789ABCDEF", result = "";
  int n, stringIndex;
  cin >> n;

  while (n > 0) {
    stringIndex = n % 16;
    n /= 16;
    result += hex[stringIndex];
  }

  cout << reverseString(result) << endl;

  return 0;
}
