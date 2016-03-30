// https://www.urionlinejudge.com.br/judge/en/problems/view/2003

#include <iostream>
#include <string>

using namespace std;

int get_minutes(string minutes) {
  string numbers = "0123456789";
  int min = 0;
  min += 10 * numbers.find(minutes[0]);
  min += numbers.find(minutes[1]);
  return min;
}

int main() {

  string hour, minutes, s;

  while (cin >> s) {
    hour = s.substr(0, 1);
    minutes = s.substr(2, 2);

    if (hour == "5" || hour == "6" || (hour == "7" && minutes == "00")) {
      cout << "Atraso maximo: 0" << endl;
    } else {
      if (hour == "7") {
        cout << "Atraso maximo: " << get_minutes(minutes) << endl;
      } else if (hour == "8") {
        cout << "Atraso maximo: " << 60 + get_minutes(minutes) << endl;
      } else if (hour == "9") {
        cout << "Atraso maximo: 120" << endl;
      }
    }
  }

  return 0;
}
