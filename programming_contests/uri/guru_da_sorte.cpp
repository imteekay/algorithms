// https://www.urionlinejudge.com.br/judge/en/problems/view/2508

#include <iostream>
#include <string>

using namespace std;

int get_value_for(string name) {
  int value = 0;
  for (int i = 0; i < name.size(); i++) {
    if (name[i] == 'A' || name[i] == 'a' || name[i] == 'j' || name[i] == 'J' || name[i] == 's' || name[i] == 'S') value++;
    else if (name[i] == 'B' || name[i] == 'b' || name[i] == 'k' || name[i] == 'K' || name[i] == 't' || name[i] == 'T') value += 2;
    else if (name[i] == 'C' || name[i] == 'c' || name[i] == 'l' || name[i] == 'L' || name[i] == 'u' || name[i] == 'U') value += 3;
    else if (name[i] == 'D' || name[i] == 'd' || name[i] == 'm' || name[i] == 'M' || name[i] == 'v' || name[i] == 'V') value += 4;
    else if (name[i] == 'E' || name[i] == 'e' || name[i] == 'n' || name[i] == 'N' || name[i] == 'w' || name[i] == 'W') value += 5;
    else if (name[i] == 'F' || name[i] == 'f' || name[i] == 'o' || name[i] == 'O' || name[i] == 'x' || name[i] == 'X') value += 6;
    else if (name[i] == 'G' || name[i] == 'g' || name[i] == 'p' || name[i] == 'P' || name[i] == 'y' || name[i] == 'Y') value += 7;
    else if (name[i] == 'H' || name[i] == 'h' || name[i] == 'q' || name[i] == 'Q' || name[i] == 'z' || name[i] == 'Z') value += 8;
    else if (name[i] == 'I' || name[i] == 'i' || name[i] == 'r' || name[i] == 'R') value += 9;
  }
  return value;
}

int get_result(int N) {
  int num;

  while (N >= 10) {
    num = 0;

    while (N > 0) {
	  	num += N % 10;
	  	N /= 10;
	  }

    N = num;
  }

  return N;
}

int main() {
  int N, num;
  string name;

  while (getline(cin, name)) {
    N = get_value_for(name);
    cout << get_result(N) << endl;
  }

  return 0;
}
