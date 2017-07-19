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

int parse_r(string eq) {
  string r = eq.substr(0, eq.find("+"));
  return string_to_int(r);
}

int parse_l(string eq) {
  string l = eq.substr(eq.find("+")+1, eq.find("=") - eq.find("+") - 1);
  return string_to_int(l);
}

int parse_j(string eq) {
  string j = eq.substr(eq.find("=")+1, eq.size() - eq.find("=") - 1);
  return string_to_int(j);
}

int main() {
  string eq;

  while (getline(cin, eq)) {
    if (eq[0] == 'R') {
      cout << parse_j(eq) - parse_l(eq) << endl;
    } else if (eq[eq.size()-1] == 'J') {
      cout << parse_r(eq) + parse_l(eq) << endl;
    } else {
      cout << parse_j(eq) - parse_r(eq) << endl;
    }
  }

  return 0;
}
