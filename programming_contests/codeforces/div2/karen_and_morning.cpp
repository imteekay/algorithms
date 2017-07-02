// http://codeforces.com/contest/816/problem/A

#include <iostream>
#include <string>

using namespace std;

int to_digit(char c) {
  return c - '0';
}

int main() {
  string hour;
  cin >> hour;

  int hour_decimal = to_digit(hour[0]),
      hour_unit = to_digit(hour[1]),
      minute_decimal = to_digit(hour[3]),
      minute_unit = to_digit(hour[4]),
      hour_int, minute;

  hour_int = hour_decimal * 10 + hour_unit;
  minute = minute_decimal * 10 + minute_unit;

  if (hour_int == minute_unit * 10 + minute_decimal) cout << 0 << endl;
  else if (hour_int == 1 && minute < 10) cout << 10 - minute << endl;
  else if ((hour_int == 0 ||hour_int == 1 || hour_int == 2 || hour_int == 3 || hour_int == 4 || hour_int == 5 ||
            hour_int == 10 || hour_int == 11 || hour_int == 12 || hour_int == 13 || hour_int == 14 || hour_int == 15 ||
            hour_int == 20 || hour_int == 21 || hour_int == 22 || hour_int == 23)
            && minute > 10) cout << 70 - minute << endl;
  else if ((hour_int == 0 ||hour_int == 1 || hour_int == 2 || hour_int == 3 || hour_int == 4 ||
            hour_int == 10 || hour_int == 11 || hour_int == 12 || hour_int == 13 || hour_int == 14 ||
            hour_int == 20 || hour_int == 21 || hour_int == 22 || hour_int == 23)
            && minute > 10)

  return 0;
}
