#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {

  map<string, int> m;
  m["one"] = 1;
  m["two"] = 2;
  m["three"] = 3;

  int one_plus_two = m["one"] + m["two"];

  cout << one_plus_two << endl;

  int total = 0;
  for (map<string, int>::iterator it = m.begin(); it != m.end(); ++it)
    total += it->second;

  cout << total << endl;

  if (m.find("two") != m.end())
    m.erase(m.find("two"));

  total = 0;
  for (map<string, int>::iterator it = m.begin(); it != m.end(); ++it)
    total += it->second;

  cout << total << endl;

  return 0;
}
