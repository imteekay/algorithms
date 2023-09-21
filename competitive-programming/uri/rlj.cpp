// https://www.urionlinejudge.com.br/judge/en/problems/view/2557

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int to_digit(char c) {
  return c - '0';
}

int string_to_int(string num) {
  int n = 0;
  for (int i = num.size()-1, j = 0; i >= 0; i--, j++) n += to_digit(num[i]) * pow(10, j);
  return n;
}

int parse_eq(string eq, int start, int size) {
  string j = eq.substr(start, size);
  return string_to_int(j);
}

int main() {
  string eq;

  while (getline(cin, eq)) {
    if (eq[0] == 'R') {
      cout << parse_eq(eq, eq.find("=")+1, eq.size() - eq.find("=") - 1) - parse_eq(eq, eq.find("+")+1, eq.find("=") - eq.find("+") - 1) << endl;
    } else if (eq[eq.size()-1] == 'J') {
      cout << parse_eq(eq, 0, eq.find("+")) + parse_eq(eq, eq.find("+")+1, eq.find("=") - eq.find("+") - 1) << endl;
    } else {
      cout << parse_eq(eq, eq.find("=")+1, eq.size() - eq.find("=") - 1) - parse_eq(eq, 0, eq.find("+")) << endl;
    }
  }

  return 0;
}
