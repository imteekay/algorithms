// https://www.urionlinejudge.com.br/judge/en/problems/view/1277

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool need_attendance(string attendance) {
  double total = attendance.size(), present = 0.0, medical = 0.0;
  for (double i = 0; i < attendance.size(); i++) {
    if (attendance[i] == 'P') present++;
    else if (attendance[i] == 'M') medical++;
  }

  total -= medical;

  if (present / total >= 0.75) return false;
  else return true;
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
        if (first_name) {
          cout << stud[i];
          first_name = false;
        } else {
          cout << " " << stud[i];
        }
      }

      cout << endl;
    } else {
      cout << endl;
    }
  }

  return 0;
}
