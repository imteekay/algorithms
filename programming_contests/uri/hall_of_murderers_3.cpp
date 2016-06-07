// https://www.urionlinejudge.com.br/judge/en/problems/view/1861

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
  const int DEAD = -1;
  int murderIndex, victimIndex;
  string murder, victim;
  map<string, int> people;

  while (cin >> murder >> victim) {
    if (people.find(murder) != people.end() && people[murder] != DEAD) people[murder]++;
    else if (people.find(murder) == people.end()) people[murder] = 1;

    if (people.find(victim) != people.end()) people[victim] = DEAD;
    else if (people.find(victim) == people.end()) people[victim] = DEAD;
  }

  cout << "HALL OF MURDERERS" << endl;

  for (map<string, int>::iterator it = people.begin(); it != people.end(); ++it) {
    if (it->second != DEAD) cout << it->first << " " << it->second << endl;
  }

  return 0;
}
