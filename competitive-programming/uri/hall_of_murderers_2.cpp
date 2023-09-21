// https://www.urionlinejudge.com.br/judge/en/problems/view/1861

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct person {
  string name;
  int kill;
  bool killed;
};

int findPerson(vector<person> &people, string name) {
  for (int i = 0; i < people.size(); i++) {
    if (people[i].name == name) return i;
  }
  return -1;
}

bool compareByName(const person &a, const person &b) {
  return a.name < b.name;
}

int main() {
  int murderIndex, victimIndex;
  string murder, victim;
  vector<person> people;

  while (cin >> murder >> victim) {
    murderIndex = findPerson(people, murder);
    if (murderIndex != -1) {
      people[murderIndex].kill++;
    } else {
      person p;
      p.kill = 1;
      p.killed = false;
      people.push_back(p);
    }

    victimIndex = findPerson(people, victim);
    if (victimIndex != -1) people[victimIndex].killed = true;
  }

  cout << "HALL OF MURDERERS" << endl;

  sort(people.begin(), people.end(), compareByName);

  for (int i = 0; i < people.size(); i++) {
    if (!people[i].killed) {
      cout << people[i].name << " " << people[i].kill << endl;
    }
  }

  return 0;
}
