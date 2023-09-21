// https://www.urionlinejudge.com.br/judge/en/problems/view/2139

#include <iostream>

using namespace std;

int main() {
  int month, day, days;
  int daysInEachMonth[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25 };

  while (cin >> month >> day) {
    if (month == 12) {
      if (day < 24) cout << "Faltam " << 25 - day << " dias para o natal!" << endl;
      else if (day == 24) cout << "E vespera de natal!" << endl;
      else if (day == 25) cout << "E natal!" << endl;
      else cout << "Ja passou!" << endl;
    } else {
      days = daysInEachMonth[month-1] - day;
      for (int i = month; i < 12; i++) days += daysInEachMonth[i];
      cout << "Faltam " << days << " dias para o natal!" << endl;
    }
  }

  return 0;
}
