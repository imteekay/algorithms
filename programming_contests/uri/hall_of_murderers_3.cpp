// https://www.urionlinejudge.com.br/judge/en/problems/view/1861

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
  int murderIndex, victimIndex;
  string murder, victim;
  map<string, int> people;

  while (cin >> murder >> victim) {
    if (people.find(murder) != people.end()) people[murder]++;
    else people[murder] = 0;

    if (people.find(victim) != people.end()) people[victim] = 0;
    else people[victim] = 0;
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
