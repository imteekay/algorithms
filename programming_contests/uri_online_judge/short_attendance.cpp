// https://www.urionlinejudge.com.br/judge/en/problems/view/1277

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int need_attendance(string attendance) {
  double total = attendance.size();
  double present = 0.0;
  for (double i = 0; i < attendance.size(); i++) if (attendance[i] == 'P' || attendance[i] == 'M') present++;
  if (present / total >= 0.75) return 0;
  else return 1;
}

int main() {

  int n, num;
  cin >> n;

  while (n--) {
    cin >> num;
    if (num) {
      string name, attendance;
      bool first_name = true;
      vector<string> students, stud;
      vector<int> attendances;

      for (int i = 0; i < num; i++) {
        cin >> name;
        students.push_back(name);
      }

      for (int i = 0; i < num; i++) {
        cin >> attendance;
        if (need_attendance(attendance)) stud.push_back(students[i]);
      }

      for (int i = 0; i < stud.size(); i++) {
        if (first_name) cout << stud[i];
        else cout << " " << stud[i];
        first_name = false;
      }

      cout << endl;
    } else {
      cout << endl;
    }
  }

  return 0;
}
