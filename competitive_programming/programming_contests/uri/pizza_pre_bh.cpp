// https://www.urionlinejudge.com.br/judge/en/problems/view/2554

#include <iostream>
#include <vector>

using namespace std;

struct date {
  int day;
  int month;
  int year;
};

int main() {
  int N, D, X, day, month, year, total, result;
  char useless;

  while (cin >> N >> D) {
    result = -1;
    vector<date> dates;

    for (int j = 0; j < D; j++) {
      total = 0;
      cin >> day >> useless >> month >> useless >> year;
      date d;
      d.day = day;
      d.month = month;
      d.year = year;
      dates.push_back(d);

      for (int i = 0; i < N; i++) {
        cin >> X;
        total += X;
      }

      if (total == N && result == -1) result = j;
    }

    if (result == -1) cout << "Pizza antes de FdI" << endl;
    else cout << dates[result].day << "/" << dates[result].month << "/" << dates[result].year << endl;
  }

  return 0;
}
