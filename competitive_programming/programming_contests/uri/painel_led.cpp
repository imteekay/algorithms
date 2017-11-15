// https://www.urionlinejudge.com.br/judge/pt/problems/view/2292

#include <iostream>
#include <string>

using namespace std;

char change_light(char type, int num, bool change) {
  if (type == 'X' && num == 0 && change) return 'O';
  if (type == 'O' && num == 0 && change) return 'X';
  if (type == 'X' && num == 1) return 'O';
  if (type == 'O' && num == 1) return 'X';
  if (type == 'X' && num % 2 != 0) return 'O';
  if (type == 'O' && num % 2 != 0) return 'X';
  if (num % 2 == 0) return type;
}

int main() {
  int N, num;
  string s, result;
  bool change;

  cin >> N;

  while (N--) {
    change = false;
    cin >> s >> num;
    result = "";

    for (int i = 0; i < s.size(); i++) {
      result += change_light(s[i], num, change);
      change = change_light(s[i], num, change) == s[i];
      num /= 2;
    }

    cout << result << endl;
  }

  return 0;
}
