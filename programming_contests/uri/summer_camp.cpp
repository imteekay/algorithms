// https://www.urionlinejudge.com.br/judge/en/problems/view/1167

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct student {
  string studentName;
  int tokenNumber;
  bool eliminated;
};

int updateStartIndexOnClockWise(vector<student> &students, int startIndex) {
  int maximumStudentsEliminated = students.size() - 1;

  if (students[startIndex].tokenNumber % 2 == 0) {
    while (students[startIndex].eliminated) {
      startIndex--;
      if (startIndex > maximumStudentsEliminated) startIndex = 0;
    }
  } else {
    while (students[startIndex].eliminated) {
      startIndex++;
      if (startIndex > maximumStudentsEliminated) startIndex = 0;
    }
  }

  return startIndex;
}

int updateStartIndexOnCounterClockWise(vector<student> &students, int startIndex) {
  int maximumStudentsEliminated = students.size() - 1;

  if (students[startIndex].tokenNumber % 2 == 0) {
    while (students[startIndex].eliminated) {
      startIndex++;
      if (startIndex > maximumStudentsEliminated) startIndex = 0;
    }
  } else {
    while (students[startIndex].eliminated) {
      startIndex--;
      if (startIndex > maximumStudentsEliminated) startIndex = 0;
    }
  }

  return startIndex;
}

int main() {
  int n, tokenNumber;
  string studentName;

  while (cin >> n && n != 0) {
    vector<student> students;

    while (n--) {
      cin >> studentName >> tokenNumber;
      student s;
      s.studentName = studentName;
      s.tokenNumber = tokenNumber;
      s.eliminated = false;
      students.push_back(s);
    }

    int counter = students[0].tokenNumber;
    int maximumStudentsEliminated = students.size() - 1;
    int studentsEliminated = 0;
    int startIndex = 0;
    bool onClockWise;

    if (counter % 2 != 0) onClockWise = true;
    else onClockWise = false;

    while (studentsEliminated < maximumStudentsEliminated) {
      while (counter--) {
        if (onClockWise) startIndex++;
        else startIndex--;
        if (startIndex > maximumStudentsEliminated) startIndex = 0;
        else if (startIndex < 0) startIndex = students.size() - 1;

        while (students[startIndex].eliminated) {
          if (onClockWise) startIndex++;
          else startIndex--;
          if (startIndex > maximumStudentsEliminated) startIndex = 0;
          else if (startIndex < 0) startIndex = students.size() - 1;
        }
      }

      students[startIndex].eliminated = true;
      counter = students[startIndex].tokenNumber;
      studentsEliminated++;
      if (counter % 2 != 0) onClockWise = true;
      else onClockWise = false;
    }

    for (int i = 0; i < students.size(); i++) {
      if (!students[i].eliminated)
        cout << "Vencedor(a): " << students[i].studentName << endl;
    }
  }

  return 0;
}
